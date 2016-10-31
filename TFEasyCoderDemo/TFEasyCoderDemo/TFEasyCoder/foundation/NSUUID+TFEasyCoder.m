//
//  NSUUID+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSUUID+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSUUID (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSUUID, NSUUID *);
TF_EC_MINSTANCE_IMP(NSUUID, NSUUID *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSUUID ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSUUID ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSUUID ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSUUID ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSUUID ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSUUID ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSUUID ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSUUID ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSUUID ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSUUID ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSUUID ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSUUID ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSUUID ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSUUID ,long long,accessibilityNavigationStyle)





@end