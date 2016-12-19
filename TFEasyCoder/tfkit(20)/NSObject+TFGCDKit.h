//
//  NSObject+TFGCDKit.h
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/13.
//  Copyright © 2016年 融数. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "TFEasyCoderConst.h"

@interface NSObject (TFGCDKit)



/**
 *  获取系统默认队列
 *
 *  @return
 */
+(dispatch_queue_t)TF_CODE_PRE(mainQueue);
@property (nonatomic,assign,readonly)dispatch_queue_t TF_CODE_PRE(mainQueue);

+(dispatch_queue_t)TF_CODE_PRE(globalQueue);
@property (nonatomic,assign,readonly)dispatch_queue_t TF_CODE_PRE(globalQueue);

+(dispatch_queue_t)TF_CODE_PRE(globalQueue_low);
@property (nonatomic,assign,readonly)dispatch_queue_t TF_CODE_PRE(globalQueue_low);

+(dispatch_queue_t)TF_CODE_PRE(globalQueue_high);
@property (nonatomic,assign,readonly)dispatch_queue_t TF_CODE_PRE(globalQueue_high);

+(dispatch_queue_t)TF_CODE_PRE(globalQueue_background);
@property (nonatomic,assign,readonly)dispatch_queue_t TF_CODE_PRE(globalQueue_background);

/**
 *  创建串行队列,提供静态和实例方法
 */
+(dispatch_queue_t)TF_CODE_PRE(serialQueueNew):(NSString *)queueName;
-(dispatch_queue_t)TF_CODE_PRE(serialQueueNew):(NSString *)queueName;
+(dispatch_queue_t)TF_CODE_PRE(serialQueueNew);
@property (nonatomic,assign,readonly)dispatch_queue_t TF_CODE_PRE(serialQueueNew);



/**
 *  创建并行队列,提供静态和实例方法
 */
+(dispatch_queue_t)TF_CODE_PRE(concurrentQueueNew):(NSString *)queueName;
-(dispatch_queue_t)TF_CODE_PRE(concurrentQueueNew):(NSString *)queueName;
+(dispatch_queue_t)TF_CODE_PRE(concurrentQueueNew);
@property (nonatomic,assign,readonly)dispatch_queue_t TF_CODE_PRE(concurrentQueueNew);

/**
 *  异步方法
 *  @param queue 队列
 *  @param block 回调
 *  @return 传入的队列
 */
+(dispatch_queue_t)TF_CODE_PRE(async):(dispatch_queue_t)queue back:(void (^)(void))block;
-(dispatch_queue_t)TF_CODE_PRE(async):(dispatch_queue_t)queue back:(void (^)(void))block;

/**
 *  同步方法
 *  @param queue 队列
 *  @param block 回调
 *  @return 传入的队列
 */
+(dispatch_queue_t)TF_CODE_PRE(sync):(dispatch_queue_t)queue back:(void (^)(void))block;
-(dispatch_queue_t)TF_CODE_PRE(sync):(dispatch_queue_t)queue back:(void (^)(void))block;


/**
 *  主线程异步
 *
 *  @param block
 */
+(void)TF_CODE_PRE(asyncMainQueue):(void (^)(void))block;
-(void)TF_CODE_PRE(asyncMainQueue):(void (^)(void))block;

/**
 *  全局线程异步
 *
 *  @param block
 */
+(void)TF_CODE_PRE(asyncGlobalQueue):(void (^)(void))block;
-(void)TF_CODE_PRE(asyncGlobalQueue):(void (^)(void))block;

/**
 *  创建一个串行队列,并在这个队列里执行block
 *  !!!注意:没调用一次就创建一个串行队列,所以会将这个队列返回
 *  @param block
 */
+(dispatch_queue_t)TF_CODE_PRE(asyncSerialQueue):(void (^)(void))block;
-(dispatch_queue_t)TF_CODE_PRE(asyncSerialQueue):(void (^)(void))block;

/**
 *  创建一个并行队列,并在这个队列里执行block
 *  !!!注意:没调用一次就创建一个并行队列,所以会将这个队列返回
 *  @param block
 */
+(dispatch_queue_t)TF_CODE_PRE(asyncConcurrentQueue):(void (^)(void))block;
-(dispatch_queue_t)TF_CODE_PRE(asyncConcurrentQueue):(void (^)(void))block;



@end
