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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISnapBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UISnapBehavior);


@end