//
//  NSFileHandle+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileHandle+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileHandle (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileHandle, NSFileHandle *);
TF_EC_MINSTANCE_IMP(NSFileHandle, NSFileHandle *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFileHandle ,long long,accessibilityNavigationStyle)





@end