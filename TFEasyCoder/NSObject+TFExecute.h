//
//  NSObject+TFExecute.h
//  两大框架继承
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


typedef void(^ClassEasyCoderBlock) (id ins);

@interface NSObject (TFExecute)

/**
 *  快速生成一个自定义类
 *  block 回调快速生成一个类的实例
 *
 *  @param block 回调block
 *
 *  @return 生成的类的实例
 */
+(instancetype)easyCoderCustem:(ClassEasyCoderBlock)block;
/**
 *  快速生成一个自定义类,用它自定义的init方法
 *  block 回调快速生成一个类的实例
 *
 *  @param block 回调block
 *
 *  @return 生成的类的实例
 */
+(instancetype)easyCoderCustemInitMethod:(SEL)sel
                                  params:(NSArray *)param
                                    back:(ClassEasyCoderBlock)block;

/**
 *  快速操作一个自定义类
 *  block 类的实例
 *
 *  @param block 回调block
 *
 *  @return 类的实例
 */
-(instancetype)easyCoderCustem:(ClassEasyCoderBlock)block;


/**
 *  block 回调快速生成一个类的实例
 *
 *  @param cls 类名
 *  @param block 回调block
 *
 *  @return 生成的类的实例
 */
+(id)tf_execute:(__unsafe_unretained Class)cls
           back:(ClassEasyCoderBlock)block;

/**
 *  block 用自定义init方法 快速生成一个类的实例
 *
 *  @param cls   类名
 *  @param sel   init 方法
 *  @param param init 方法的参数
 *  @param block 回调block
 *
 *  @return 生成的类的实例
 */
+(id)tf_execute:(__unsafe_unretained Class)cls
     initMethod:(SEL)sel params:(NSArray *)param
           back:(ClassEasyCoderBlock)block;

/**
 *  给实例属性赋值
 *
 *  @param _target 要赋值的实例
 *  @param _value  要赋值的属性的值
 *  @param _key    要赋值的属性的键
 */
+(void)tf_setTargetValue:(id)_target
               withValue:(id)_value
                  forKey:(NSString *)_key;

/**
 *  对象执行方法
 *
 *  @param _sel    方法SEL
 *  @param _target 对象
 *  @param params  方法的参数
 *
 *  @return 返回值
 *  注意:
 *  1.方法的参数必须不能是基本类型数据,特殊类型数据的传入需要包装成NSValue
 *  2.方法的返回值如果是普通对象,那么直接是普通对象的实例,如果是特殊类型(比如block/stuct)那么返回NSValue,获取返回值需要从NSValue中取
 */
+(id)tf_executeSelector:(SEL)_sel
             withTarget:(id)_target
             withParams:(id)params,...;

/**
 *  对象执行方法
 *
 *  @param _sel    方法SEL
 *  @param _target 对象
 *  @param params  方法的参数
 *
 *  @return 返回值
 *  注意:
 *  1.方法的参数必须不能是基本类型数据,特殊类型数据的传入需要包装成NSValue
 *  2.方法的返回值如果是普通对象,那么直接是普通对象的实例,如果是特殊类型(比如block/stuct)那么返回NSValue,获取返回值需要从NSValue中取
 */
+(id)tf_executeSelector:(SEL)_sel
             withTarget:(id)_target
        withParamsArray:(NSArray*)params;



/**
 *  为所有自定义属性添加setter 和 getter方法
 *  @param target 要添加方法的实例对象
 */
-(void)tf_synthesizeAllCategoryPropertyForSelf;
+(void)tf_synthesizeAllCategoryPropertyForTarget:(id)target;



@end


