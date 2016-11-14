//
//  NSProxy+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSProxy+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSProxy (TFEasyCoder)

+( NSProxy *)easyCoder:(NSProxyEasyCoderBlock)block{
    return [NSObject tf_execute:[self class] back:^(id ins) {
        if (block) {
            block(( NSProxy *)ins);
        }
    }];
}

-( NSProxy *)easyCoder:(NSProxyEasyCoderBlock)block{
    if (block) {
        __weak typeof(self) weakSelf = self;
        block(weakSelf);
    }
    return self;
}




-(NSProxy *(^)(id value,NSString *key))set_ValueKey{
    __weak typeof(self) weakSelf = self;
    return ^(id value,NSString *key){
        [NSObject tf_setTargetValue:weakSelf withValue:value forKey:key];
        return weakSelf;
    };
}


@end