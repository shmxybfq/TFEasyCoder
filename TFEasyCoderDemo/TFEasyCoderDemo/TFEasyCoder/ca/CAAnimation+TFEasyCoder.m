//
//  CAAnimation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAAnimation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAAnimation (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAAnimation, CAAnimation *);
TF_EC_MINSTANCE_IMP(CAAnimation, CAAnimation *);



TF_EC_CHAIN_PROP_IMP(CAAnimation ,CAMediaTimingFunction *,timingFunction)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAAnimation ,NSString *,fillMode)

@end