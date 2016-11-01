//
//  CATransaction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATransaction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATransaction (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATransaction, CATransaction *);
TF_EC_MINSTANCE_IMP(CATransaction, CATransaction *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CATransaction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CATransaction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CATransaction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CATransaction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CATransaction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CATransaction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CATransaction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CATransaction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CATransaction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CATransaction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CATransaction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CATransaction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CATransaction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CATransaction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(CATransaction);


@end