//
//  NSPort+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPort+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPort (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPort, NSPort *);
TF_EC_MINSTANCE_IMP(NSPort, NSPort *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPort ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPort ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPort ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPort ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPort ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPort ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPort ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPort ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPort ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPort ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPort ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPort ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPort ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPort ,long long,accessibilityNavigationStyle)





@end