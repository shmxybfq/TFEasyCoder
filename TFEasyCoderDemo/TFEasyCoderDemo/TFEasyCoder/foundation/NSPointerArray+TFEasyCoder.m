//
//  NSPointerArray+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPointerArray+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPointerArray (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPointerArray, NSPointerArray *);
TF_EC_MINSTANCE_IMP(NSPointerArray, NSPointerArray *);


TF_EC_CHAIN_PROP_IMP(NSPointerArray ,unsigned long long,count)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPointerArray ,long long,accessibilityNavigationStyle)





@end