//
//  UIPanGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPanGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPanGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPanGestureRecognizer, UIPanGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIPanGestureRecognizer, UIPanGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,unsigned long long,minimumNumberOfTouches)
TF_EC_CHAIN_PROP_IMP(UIPanGestureRecognizer ,unsigned long long,maximumNumberOfTouches)

@end