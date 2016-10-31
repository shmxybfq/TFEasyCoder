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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIGravityBehavior ,long long,accessibilityNavigationStyle)





@end