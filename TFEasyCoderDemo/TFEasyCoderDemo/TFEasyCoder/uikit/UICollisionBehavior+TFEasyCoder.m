//
//  UICollisionBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollisionBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollisionBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollisionBehavior, UICollisionBehavior *);
TF_EC_MINSTANCE_IMP(UICollisionBehavior, UICollisionBehavior *);


TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,unsigned long long,collisionMode)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,BOOL,translatesReferenceBoundsIntoBoundary)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,id<UICollisionBehaviorDelegate>  ,collisionDelegate)

@end