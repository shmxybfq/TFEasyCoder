//
//  UIKeyCommand+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIKeyCommand+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIKeyCommand (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIKeyCommand, UIKeyCommand *);
TF_EC_MINSTANCE_IMP(UIKeyCommand, UIKeyCommand *);


TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSString *,discoverabilityTitle)

@end