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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIFieldBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIFieldBehavior);


@end