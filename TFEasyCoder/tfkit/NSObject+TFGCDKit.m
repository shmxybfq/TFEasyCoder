//
//  NSObject+TFGCDKit.m
//  TFEasyCoderDemo
//
//  Created by 融数 on 16/12/13.
//  Copyright © 2016年 融数. All rights reserved.
//

#import "NSObject+TFGCDKit.h"

@implementation NSObject (TFGCDKit)

/**
 *  获取系统默认队列
 *
 *  @return
 */
+(dispatch_queue_t)tf_code_pre(mainQueue){return dispatch_get_main_queue();}
-(dispatch_queue_t)tf_code_pre(mainQueue){return dispatch_get_main_queue();}

+(dispatch_queue_t)tf_code_pre(globalQueue){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);}
-(dispatch_queue_t)tf_code_pre(globalQueue){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0);}

-(dispatch_queue_t)tf_code_pre(globalQueue_low){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0);}
+(dispatch_queue_t)tf_code_pre(globalQueue_low){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_LOW, 0);}

-(dispatch_queue_t)tf_code_pre(globalQueue_high){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0);}
+(dispatch_queue_t)tf_code_pre(globalQueue_high){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_HIGH, 0);}

-(dispatch_queue_t)tf_code_pre(globalQueue_background){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0);}
+(dispatch_queue_t)tf_code_pre(globalQueue_background){return dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_BACKGROUND, 0);}

/**
 *  创建串行队列,提供静态和实例方法
 */
static long TFGCDKit_Queue_Serial = 10000;
+(dispatch_queue_t)tf_code_pre(serialQueueNew):(NSString *)queueName{
    NSString *qn;TFGCDKit_Queue_Serial++;
    if (queueName)qn = [NSString stringWithFormat:@"com.TFGCDKit_Searial.%@",queueName];
    else qn = [NSString stringWithFormat:@"com.TFGCDKit_Searial.%@",@(TFGCDKit_Queue_Serial)];
    return dispatch_queue_create(qn.UTF8String, DISPATCH_QUEUE_SERIAL);
}
-(dispatch_queue_t)tf_code_pre(serialQueueNew):(NSString *)queueName{return [NSObject tf_code_pre(serialQueueNew):queueName];}
+(dispatch_queue_t)tf_code_pre(serialQueueNew){return  [NSObject tf_code_pre(serialQueueNew):nil];}
-(dispatch_queue_t)tf_code_pre(serialQueueNew){return  [NSObject tf_code_pre(serialQueueNew):nil];}


/**
 *  创建并行队列,提供静态和实例方法
 */
static long TFGCDKit_Queue_Concurrent = 10000;
+(dispatch_queue_t)tf_code_pre(concurrentQueueNew):(NSString *)queueName{
    NSString *qn;TFGCDKit_Queue_Concurrent++;
    if (queueName)qn = [NSString stringWithFormat:@"com.TFGCDKit_Concurrent.%@",queueName];
    else qn = [NSString stringWithFormat:@"com.TFGCDKit_Concurrent.%@",@(TFGCDKit_Queue_Concurrent)];
    return dispatch_queue_create(qn.UTF8String, DISPATCH_QUEUE_CONCURRENT);
    
}
-(dispatch_queue_t)tf_code_pre(concurrentQueueNew):(NSString *)queueName{return [NSObject tf_code_pre(concurrentQueueNew):nil];}
+(dispatch_queue_t)tf_code_pre(concurrentQueueNew){return  [NSObject tf_code_pre(concurrentQueueNew):nil];}
-(dispatch_queue_t)tf_code_pre(concurrentQueueNew){return  [NSObject tf_code_pre(concurrentQueueNew):nil];}


/**
 *  异步方法
 *  @param queue 队列
 *  @param block 回调
 *  @return 传入的队列
 */
+(dispatch_queue_t)tf_code_pre(async):(dispatch_queue_t)queue back:(void (^)(void))block{dispatch_async(queue, block);return queue;}
-(dispatch_queue_t)tf_code_pre(async):(dispatch_queue_t)queue back:(void (^)(void))block{dispatch_async(queue, block);return queue;}

/**
 *  同步方法
 *  @param queue 队列
 *  @param block 回调
 *  @return 传入的队列
 */
+(dispatch_queue_t)tf_code_pre(sync):(dispatch_queue_t)queue back:(void (^)(void))block{dispatch_sync(queue, block);return queue;}
-(dispatch_queue_t)tf_code_pre(sync):(dispatch_queue_t)queue back:(void (^)(void))block{dispatch_sync(queue, block);return queue;}


/**
 *  主线程异步
 *
 *  @param block
 */
+(void)tf_code_pre(asyncMainQueue):(void (^)(void))block{dispatch_async(dispatch_get_main_queue(), block);}
-(void)tf_code_pre(asyncMainQueue):(void (^)(void))block{dispatch_async(dispatch_get_main_queue(), block);}

/**
 *  全局线程异步
 *
 *  @param block
 */
+(void)tf_code_pre(asyncGlobalQueue):(void (^)(void))block{dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block);}
-(void)tf_code_pre(asyncGlobalQueue):(void (^)(void))block{dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), block);}

/**
 *  创建一个串行队列,并在这个队列里执行block
 *  !!!注意:没调用一次就创建一个串行队列,所以会将这个队列返回
 *  @param block
 */
+(dispatch_queue_t)tf_code_pre(asyncSerialQueue):(void (^)(void))block{
    dispatch_queue_t queue = [NSObject tf_code_pre(serialQueueNew):nil];
    dispatch_async(queue, block);
    return queue;
}
-(dispatch_queue_t)tf_code_pre(asyncSerialQueue):(void (^)(void))block{
    dispatch_queue_t queue = [NSObject tf_code_pre(serialQueueNew):nil];
    dispatch_async(queue, block);
    return queue;
}

/**
 *  创建一个并行队列,并在这个队列里执行block
 *  !!!注意:没调用一次就创建一个并行队列,所以会将这个队列返回
 *  @param block
 */
+(dispatch_queue_t)tf_code_pre(asyncConcurrentQueue):(void (^)(void))block{
    dispatch_queue_t queue = [NSObject tf_code_pre(concurrentQueueNew):nil];
    dispatch_async(queue, block);
    return queue;
}
-(dispatch_queue_t)tf_code_pre(asyncConcurrentQueue):(void (^)(void))block{
    dispatch_queue_t queue = [NSObject tf_code_pre(concurrentQueueNew):nil];
    dispatch_async(queue, block);
    return queue;
}








@end
