//
//  TFEasyCoderConst.h
//  两大框架继承
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//


/**
 *  weak self
 *  @param self     self
 *  @param weakSelf weakSelf
 */
#ifndef TFEasyCoderConst_h
#define TFEasyCoderConst_h

#ifndef kdeclare_weakself
#define kdeclare_weakself TF_WEAK_OBJ(self,weakSelf)
#endif


/**
 *  weak obj
 *  @param TARGET 实例
 *  @param NAME   弱实例名字
 */
#ifndef TF_WEAK_OBJ
#define TF_WEAK_OBJ(TARGET,NAME)  __weak typeof(TARGET) NAME = TARGET;
#endif


/**
 *  typedef void(^UIViewEasyCoderBlock) (UIView * ins)
 *  @param CLASS_NAME UIView
 *  @param CLASS_TYPE UIView *
 *  @return null
 */
#define TF_EC_BLOCK(CLASS_NAME,CLASS_TYPE) typedef void(^CLASS_NAME##EasyCoderBlock) (CLASS_TYPE ins)

/**
 *  +(UILabel *)easyCoder:(UILabelEasyCoderBlock)block;
 */
#define TF_EC_MSTATIC_INT(CLASS_NAME,CLASS_TYPE) +(CLASS_TYPE)easyCoder:(CLASS_NAME##EasyCoderBlock)block
#define TF_EC_MSTATIC_IMP(CLASS_NAME,CLASS_TYPE)\
+(CLASS_TYPE)easyCoder:(CLASS_NAME##EasyCoderBlock)block{\
return [NSObject tf_execute:[self class] back:^(id ins) {\
if (block) {\
block((CLASS_TYPE)ins);\
}\
}];\
}


/**
 *  -(UILabel *)easyCoder:(UILabelEasyCoderBlock)block;
 */
#define TF_EC_MINSTANCE_INT(CLASS_NAME,CLASS_TYPE) -(CLASS_TYPE)easyCoder:(CLASS_NAME##EasyCoderBlock)block
#define TF_EC_MINSTANCE_IMP(CLASS_NAME,CLASS_TYPE)\
-(CLASS_TYPE)easyCoder:(CLASS_NAME##EasyCoderBlock)block{\
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
#define TF_EC_CHAIN_PROP_INT(CLASS,PTYPE,PROPERTY) -(CLASS *(^)(PTYPE  PROPERTY))set_##PROPERTY;
#define TF_EC_CHAIN_PROP_IMP(CLASS,PTYPE,PROPERTY) \
-(CLASS *(^)(PTYPE  PROPERTY))set_##PROPERTY{\
__weak typeof(self) weakSelf = self;\
return ^(PTYPE  PROPERTY){\
weakSelf.PROPERTY = PROPERTY;\
return weakSelf;\
};\
}

/**
 *  
 *
 *  @param CLASS <#CLASS description#>
 *
 *  @return <#return value description#>
 */
#define TF_EC_CHAIN_VALUEKYE_INT(CLASS) -(CLASS *(^)(id value,NSString *key))set_ValueKey;
#define TF_EC_CHAIN_VALUEKYE_IMP(CLASS)\
-(CLASS *(^)(id value,NSString *key))set_ValueKey{\
__weak typeof(self) weakSelf = self;\
return ^(id value,NSString *key){\
[NSObject tf_setTargetValue:weakSelf withValue:value forKey:key];\
return weakSelf;\
};\
}



/**
 *  参数崩溃断言
 *
 *  @param FLOG   原因
 *  @param REASON 异常原因
 */
#ifndef TFAssertParamNil
#define TFAssertParamNil(FLOG,REASON) TFAssert(FLOG,@"unknown name",REASON)
#endif


/**
 *  警告断言
 *
 *  @param FLOG   原因
 *  @param REASON 异常原因
 *
 */
#ifndef TFAssertWarning
#define TFAssertWarning(FLOG,REASON) if (!FLOG) NSLog(@"************TFUIWarning:reason %@",REASON);
#endif

/**
 *  断言
 *
 *  @param FLOG   原因
 *  @param NAME   异常名字
 *  @param REASON 异常原因
 */
#ifndef TFAssert
#define TFAssert(FLOG,NAME,REASON) if (!FLOG)@throw [NSException exceptionWithName:NAME reason:REASON userInfo:nil];
#endif

/**
 *  懒加载属性,class 初始化方法为init
 *
 *  @param __CLASS    属性类型
 *  @param __PROPERTY 属性定义值
 *
 *  @return 属性
 */

#define TF_LAZYLOAD_OBJC(__CLASS,__PROPERTY)\
TF_SYNTHESIZE(__PROPERTY);\
-(__CLASS *)__PROPERTY{\
if (!_##__PROPERTY)\
_##__PROPERTY = [[__CLASS alloc]init];\
return _##__PROPERTY;}


/**
 *  synthesize 属性
 *
 *  @param __PROPERTY 属性
 */
#define TF_SYNTHESIZE(__PROPERTY) @synthesize __PROPERTY = _##__PROPERTY;



#endif /* TFEasyCoderConst_h */
