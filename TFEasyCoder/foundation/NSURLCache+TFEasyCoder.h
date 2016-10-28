//
//  NSURLCache+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLCache,NSURLCache *);

@interface NSURLCache (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLCache, NSURLCache *);
TF_EC_MINSTANCE_INT(NSURLCache,NSURLCache *);


TF_EC_CHAIN_PROP_INT(NSURLCache ,unsigned long long,memoryCapacity);
TF_EC_CHAIN_PROP_INT(NSURLCache ,unsigned long long,diskCapacity);

@end