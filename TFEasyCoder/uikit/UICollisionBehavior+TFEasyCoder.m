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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollisionBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UICollisionBehavior);


@end