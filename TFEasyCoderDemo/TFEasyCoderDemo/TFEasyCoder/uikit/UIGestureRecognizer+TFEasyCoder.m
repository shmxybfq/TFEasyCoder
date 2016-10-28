//
//  UIGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIGestureRecognizer, UIGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIGestureRecognizer, UIGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UIGestureRecognizer ,NSArray *,allowedPressTypes)

@end