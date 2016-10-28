//
//  UISwipeGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISwipeGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISwipeGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISwipeGestureRecognizer, UISwipeGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UISwipeGestureRecognizer, UISwipeGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UISwipeGestureRecognizer ,unsigned long long,direction)


@end