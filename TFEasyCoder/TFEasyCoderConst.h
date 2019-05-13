//
//  TFEasyCoderConst.h
//  两大框架继承
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//



#ifndef TFEasyCoderConst_h
#define TFEasyCoderConst_h

#import <objc/runtime.h>

/**
 *  代码前缀
 *  框架默认以tf_作为代码前缀,如果你想自定义代码前缀,请在引入框架前重新定一个新的代码前缀宏定义,类似下面
 
 #define tf_code_pre(code) xxx_##code //将xxx_换成你自己的前缀
 #import "TFKit.h"
 
 *  @param code 代码
 *  @return
 */
#ifndef tf_code_pre
#define tf_code_pre(code) tf_##code
#endif

#ifndef kdeclare_weakself
#define kdeclare_weakself tf_weak_obj(self,weakSelf)
#endif



/**
 *  exemple :
 *  @property (nonatomic,  copy)NSString *string;
 *  tf_synthesize_category_property(string , setString,OBJC_ASSOCIATION_RETAIN_NONATOMIC)
 *
 *  tf_synthesize_category_property_retain retain属性
 *  tf_synthesize_category_property_copy copy属性
 *  tf_synthesize_category_property_assign assign属性
 *
 *  @param getter getter 方法名
 *  @param settter settter 方法名,不需要:
 */
#define tf_synthesize_category_property_retain(getter,settter) tf_synthesize_category_property(getter,settter,OBJC_ASSOCIATION_RETAIN_NONATOMIC,id)

#define tf_synthesize_category_property_copy(getter,settter)   tf_synthesize_category_property(getter,settter,OBJC_ASSOCIATION_COPY,id)

#define tf_synthesize_category_property_assign(getter,settter) tf_synthesize_category_property(getter,settter,OBJC_ASSOCIATION_ASSIGN,id)

#define tf_synthesize_category_property_block(getter,settter,TYPE)   tf_synthesize_category_property(getter,settter,OBJC_ASSOCIATION_COPY,TYPE)

#define tf_synthesize_category_property(getter,settter,objc_AssociationPolicy,TYPE)\
- (TYPE)getter{return objc_getAssociatedObject(self, @selector(getter));}\
- (void)settter:(TYPE)obj{objc_setAssociatedObject(self, @selector(getter), obj, objc_AssociationPolicy);}

/**
 *  exemple :
 *  @property (nonatomic,assign)CGPoint point;
 *  tf_synthesize_category_property_ctype(point,setPoint,CGPoint)
 *
 *  tf_synthesize_category_property_ctype
 *
 *  @param getter getter 方法名
 *  @param settter settter 方法名字
 *  @param CTYPE 数据类型
 *
 */
#define tf_synthesize_category_property_ctype(getter,settter,ctype)\
-(ctype)getter{\
NSValue *associate_value = objc_getAssociatedObject(self, @selector(getter));\
ctype  value;\
[associate_value getValue:&value];\
return value;\
}\
-(void)settter:(ctype)value{\
NSValue *associate_value = [NSValue value:&value withObjCType:@encode(ctype)];\
objc_setAssociatedObject(self, @selector(getter), associate_value, OBJC_ASSOCIATION_ASSIGN);\
}



/**
 *  weak obj
 *  @param TARGET 实例
 *  @param NAME   弱实例名字
 */
#ifndef tf_weak_obj
#define tf_weak_obj(target,name)  __weak typeof(target) name = target;
#endif


/**
 *  typedef void(^UIViewEasyCoderBlock) (UIView * ins)
 *  修改下方的"ins"以全局修改TFEasyCoder中所有方法回调的变量名ins，例如下面的示例代码
 *  [UIView easyCoder:^(UIView *ins) {
 *
 *  }];
 *  @param class_name UIView
 *  @param class_type UIView *
 *  @return null
 */
#define tf_ec_block(class_name,class_type) typedef void(^class_name##EasyCoderBlock) (class_type ins)
/**
 *  修改下方的"easyCoder"以全局修改TFEasyCoder中所有方法的调用方式，例如下面的示例代码
 *  [UIView easyCoder:^(UIView *ins) {
 *
 *  }];
 *  +(UILabel *)easyCoder:(UILabelEasyCoderBlock)block;
 */
#define tf_ec_mname easyCoder
#define tf_ec_mstatic_int(class_name,class_type) +(class_type)tf_ec_mname:(class_name##EasyCoderBlock)block
#define tf_ec_mstatic_imp(class_name,class_type)\
+(class_type)tf_ec_mname:(class_name##EasyCoderBlock)block{\
return [NSObject tf_execute:[self class] back:^(id ins) {\
if (block) {\
block((class_type)ins);\
}\
}];\
}

/**
 *  -(UILabel *)easyCoder:(UILabelEasyCoderBlock)block;
 */
#define tf_ec_minstance_int(class_name,class_type) -(class_type)tf_ec_mname:(class_name##EasyCoderBlock)block
#define tf_ec_minstance_imp(class_name,class_type)\
-(class_type)tf_ec_mname:(class_name##EasyCoderBlock)block{\
if (block) {\
__weak typeof(self) weakSelf = self;\
block(weakSelf);\
}\
return self;\
}


/**
 *  -(UILabel *(^)(NSString * text))set_text;
 *  -(UILabel * (^)(NSString * text))set_text{
 *       __weak typeof(self) weakSelf = self;
 *      return ^(NSString * text){
 *           weakSelf.text = text;
 *           return weakSelf;
 *       };
 *   }
 */
#define tf_ec_chain_prop_int(class,ptype,property) -(class *(^)(ptype  property))set_##property;
#define tf_ec_chain_prop_imp(class,ptype,property) \
-(class *(^)(ptype  property))set_##property{\
__weak typeof(self) weakSelf = self;\
return ^(ptype  property){\
weakSelf.property = property;\
return weakSelf;\
};\
}

/**
 *  
 *
 *  @param CLASS
 *
 *  @return 
 */
#define tf_ec_chain_valuekey_int(class) -(class *(^)(id value,NSString *key))set_ValueKey;
#define tf_ec_chain_valuekey_imp(class)\
-(class *(^)(id value,NSString *key))set_ValueKey{\
__weak typeof(self) weakSelf = self;\
return ^(id value,NSString *key){\
[NSObject tf_setTargetValue:weakSelf withValue:value forKey:key];\
return weakSelf;\
};\
}


/**
 *  为你的类添加easyCoder方法(.h文件中调用)
 *  @return
 */
#define tf_define_tfeasycoder_int(class_name,class_type)\
tf_ec_mstatic_int(class_name, class_type);\
tf_ec_minstance_int(class_name,class_type);\
tf_ec_chain_valuekey_int(class_name);
/**
 *  为你的类添加easyCoder方法(.m文件中调用)
 *  @return
 */
#define tf_define_tfeasycoder_imp(class_name,class_type)\
tf_ec_mstatic_imp(class_name, class_type);\
tf_ec_minstance_imp(class_name, class_type);\
tf_ec_chain_valuekey_imp(class_name);\



/**
 *  参数崩溃断言
 *
 *  @param FLOG   原因
 *  @param REASON 异常原因
 */
#ifndef TFAssertParamNil
#define TFAssertParamNil(flog,reason) TFAssert(flog,@"unknown name",reason)
#endif


/**
 *  警告断言
 *
 *  @param FLOG   原因
 *  @param REASON 异常原因
 *
 */
#ifndef TFAssertWarning
#define TFAssertWarning(flog,reason) if (!flog) NSLog(@"************TFUIWarning:reason %@",reason);
#endif

/**
 *  断言
 *
 *  @param FLOG   原因
 *  @param NAME   异常名字
 *  @param REASON 异常原因
 */
#ifndef TFAssert
#define TFAssert(flog,name,reason) if (!flog)@throw [NSException exceptionWithName:name reason:reason userInfo:nil];
#endif

/**
 *  懒加载属性,class 初始化方法为init,使用方法见github
 *  @param __CLASS    属性类型
 *  @param __PROPERTY 属性定义值
 *  @return 属性
 */

#define tf_lazyload_objc(class,property)\
tf_synthesize(property);\
-(class *)property{\
if (!_##property)\
_##property = [[class alloc]init];\
return _##property;}

/**
 *  懒加载属性,class 初始化方法为init,使用方法见github
 *  @param __CLASS    属性类型
 *  @param __PROPERTY 属性定义值
 *  @param __BLOCK 一个返回属性
 *  @return 属性
 */
#define tf_lazyload_objc_cus(class,property,block)\
tf_synthesize(property);\
-(class *)property{\
if (!_##property)\
_##property = [[class alloc]init];\
block(_##property);\
return _##property;}\


/**
 *  synthesize 属性
 *
 *  @param __PROPERTY 属性
 */
#define tf_synthesize(property) @synthesize property = _##property;


/**
 *  TFlog
 *
 */
#ifndef TFLog
#   define TFLog(fmt, ...) NSLog((@"function:%s,line:%d" fmt), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#endif

/**
 *  TFlog
 *
 */
#ifdef DEBUG
#   define x_log(fmt, ...) NSLog((@"\nfunction:%s,line:%d\n" fmt @"\n"), __PRETTY_FUNCTION__, __LINE__, ##__VA_ARGS__);
#else
#   define x_log(...)
#endif



#endif /* TFEasyCoderConst_h */

