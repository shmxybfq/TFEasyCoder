//
//  NSInvocation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSInvocation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSInvocation (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSInvocation, NSInvocation *);
TF_EC_MINSTANCE_IMP(NSInvocation, NSInvocation *);


TF_EC_CHAIN_PROP_IMP(NSInvocation ,SEL,selector)

@end