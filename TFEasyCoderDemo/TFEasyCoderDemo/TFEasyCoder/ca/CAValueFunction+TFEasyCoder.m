//
//  CAValueFunction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAValueFunction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAValueFunction (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAValueFunction, CAValueFunction *);
TF_EC_MINSTANCE_IMP(CAValueFunction, CAValueFunction *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAValueFunction ,long long,accessibilityNavigationStyle)





@end