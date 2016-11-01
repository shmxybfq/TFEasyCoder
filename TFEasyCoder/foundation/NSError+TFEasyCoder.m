//
//  NSError+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSError+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSError (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSError, NSError *);
TF_EC_MINSTANCE_IMP(NSError, NSError *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSError ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSError ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSError ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSError ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSError ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSError ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSError ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSError ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSError ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSError ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSError ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSError ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSError ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSError ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSError);


@end