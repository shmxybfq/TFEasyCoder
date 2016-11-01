//
//  NSLayoutConstraint+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLayoutConstraint+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLayoutConstraint (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLayoutConstraint, NSLayoutConstraint *);
TF_EC_MINSTANCE_IMP(NSLayoutConstraint, NSLayoutConstraint *);


TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,float,priority)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,shouldBeArchived)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,double,constant)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSString *,identifier)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSLayoutConstraint);


@end