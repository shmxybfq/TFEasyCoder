//
//  NSURL+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURL+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURL (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURL, NSURL *);
TF_EC_MINSTANCE_IMP(NSURL, NSURL *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURL ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURL ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURL ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURL ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURL ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURL ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURL ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURL ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURL ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURL ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURL ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURL ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURL ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURL ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURL);


@end