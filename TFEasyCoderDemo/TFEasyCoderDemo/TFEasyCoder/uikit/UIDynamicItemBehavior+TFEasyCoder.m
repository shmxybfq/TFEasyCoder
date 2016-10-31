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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemBehavior ,long long,accessibilityNavigationStyle)





@end