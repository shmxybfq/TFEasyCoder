//
//  UIDynamicBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDynamicBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDynamicBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDynamicBehavior, UIDynamicBehavior *);
TF_EC_MINSTANCE_IMP(UIDynamicBehavior, UIDynamicBehavior *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDynamicBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIDynamicBehavior);


@end