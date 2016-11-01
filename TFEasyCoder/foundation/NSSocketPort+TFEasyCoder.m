//
//  NSSocketPort+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSSocketPort+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSSocketPort (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSSocketPort, NSSocketPort *);
TF_EC_MINSTANCE_IMP(NSSocketPort, NSSocketPort *);






//superclass pros NSPort
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSSocketPort ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSSocketPort);


@end