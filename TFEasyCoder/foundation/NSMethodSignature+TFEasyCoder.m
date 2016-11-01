//
//  NSMethodSignature+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMethodSignature+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMethodSignature (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMethodSignature, NSMethodSignature *);
TF_EC_MINSTANCE_IMP(NSMethodSignature, NSMethodSignature *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMethodSignature ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMethodSignature);


@end