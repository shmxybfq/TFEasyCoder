//
//  NSObject+TFExecute.h
//  两大框架继承
//
//  Created by 融数 on 16/10/26.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <Foundation/Foundation.h>

typedef void(^ClassEasyCoderBlock) (id ins);


@interface NSObject (TFExecute)


+(id)tf_execute:(__unsafe_unretained Class)cls
           back:(ClassEasyCoderBlock)block;

+(id)tf_execute:(__unsafe_unretained Class)cls
     initMethod:(SEL)sel params:(NSArray *)param
           back:(ClassEasyCoderBlock)block;

+(NSValue *)tf_executeSelector:(SEL)_sel
                    withTarget:(id)_target
                    withParams:(id)params,...;

+(NSValue *)tf_executeSelector:(SEL)_sel
                    withTarget:(id)_target
               withParamsArray:(NSArray*)params;

@end
