//
//  UISnapBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISnapBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISnapBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISnapBehavior, UISnapBehavior *);
TF_EC_MINSTANCE_IMP(UISnapBehavior, UISnapBehavior *);


TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,CGPoint,snapPoint)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,double,damping)

@end