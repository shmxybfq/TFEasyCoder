//
//  NSPointerFunctions+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPointerFunctions+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPointerFunctions (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPointerFunctions, NSPointerFunctions *);
TF_EC_MINSTANCE_IMP(NSPointerFunctions, NSPointerFunctions *);


TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,usesStrongWriteBarrier)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,usesWeakReadAndWriteBarriers)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPointerFunctions ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSPointerFunctions);


@end