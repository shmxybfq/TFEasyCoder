//
//  NSProxy+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSProxyEasyCoderBlock) (NSProxy * ins);

@interface NSProxy (TFEasyCoder)

+( NSProxy *)easyCoder:(NSProxyEasyCoderBlock)block;
-(NSProxy *)easyCoder:(NSProxyEasyCoderBlock)block;



-(NSProxy *(^)(id value,NSString *key))set_ValueKey;


@end