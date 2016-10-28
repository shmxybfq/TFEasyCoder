//
//  UIMotionEffectGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMotionEffectGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMotionEffectGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMotionEffectGroup, UIMotionEffectGroup *);
TF_EC_MINSTANCE_IMP(UIMotionEffectGroup, UIMotionEffectGroup *);


TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSArray *,motionEffects)

@end