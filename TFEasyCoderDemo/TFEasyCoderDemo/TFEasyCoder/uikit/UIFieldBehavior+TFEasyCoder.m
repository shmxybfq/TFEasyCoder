//
//  UIFieldBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFieldBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIFieldBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIFieldBehavior, UIFieldBehavior *);
TF_EC_MINSTANCE_IMP(UIFieldBehavior, UIFieldBehavior *);


TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,CGPoint,position)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,double,strength)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,double,falloff)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,double,minimumRadius)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,CGVector,direction)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,double,smoothness)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,double,animationSpeed)

@end