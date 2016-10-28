//
//  UIPushBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPushBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPushBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPushBehavior, UIPushBehavior *);
TF_EC_MINSTANCE_IMP(UIPushBehavior, UIPushBehavior *);


TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,double,angle)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,double,magnitude)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,CGVector,pushDirection)

@end