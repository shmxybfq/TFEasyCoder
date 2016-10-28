//
//  UIDynamicAnimator+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDynamicAnimator+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDynamicAnimator (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDynamicAnimator, UIDynamicAnimator *);
TF_EC_MINSTANCE_IMP(UIDynamicAnimator, UIDynamicAnimator *);


TF_EC_CHAIN_PROP_IMP(UIDynamicAnimator ,id<UIDynamicAnimatorDelegate>  ,delegate)

@end