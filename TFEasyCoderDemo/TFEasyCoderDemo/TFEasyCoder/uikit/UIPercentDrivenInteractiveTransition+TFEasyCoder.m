//
//  UIPercentDrivenInteractiveTransition+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPercentDrivenInteractiveTransition+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPercentDrivenInteractiveTransition (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPercentDrivenInteractiveTransition, UIPercentDrivenInteractiveTransition *);
TF_EC_MINSTANCE_IMP(UIPercentDrivenInteractiveTransition, UIPercentDrivenInteractiveTransition *);


TF_EC_CHAIN_PROP_IMP(UIPercentDrivenInteractiveTransition ,double,completionSpeed)
TF_EC_CHAIN_PROP_IMP(UIPercentDrivenInteractiveTransition ,long long,completionCurve)

@end