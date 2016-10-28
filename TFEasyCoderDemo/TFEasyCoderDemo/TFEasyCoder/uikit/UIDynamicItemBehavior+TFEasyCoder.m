//
//  UIDynamicItemBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDynamicItemBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDynamicItemBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDynamicItemBehavior, UIDynamicItemBehavior *);
TF_EC_MINSTANCE_IMP(UIDynamicItemBehavior, UIDynamicItemBehavior *);


TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,double,elasticity)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,double,friction)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,double,density)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,double,resistance)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,double,charge)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,BOOL,anchored)

@end