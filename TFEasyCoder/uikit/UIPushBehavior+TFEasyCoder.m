//
//  UIPushBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPushBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPushBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPushBehavior, UIPushBehavior *);
TF_EC_MINSTANCE_IMP(UIPushBehavior, UIPushBehavior *);


TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,double,angle)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,double,magnitude)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,CGVector,pushDirection)




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPushBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPushBehavior);


@end