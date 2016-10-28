//
//  UIGravityBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIGravityBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIGravityBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIGravityBehavior, UIGravityBehavior *);
TF_EC_MINSTANCE_IMP(UIGravityBehavior, UIGravityBehavior *);


TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,CGVector,gravityDirection)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,double,angle)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,double,magnitude)

@end