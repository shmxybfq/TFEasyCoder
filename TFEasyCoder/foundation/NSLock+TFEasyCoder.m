//
//  NSLock+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLock+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLock (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLock, NSLock *);
TF_EC_MINSTANCE_IMP(NSLock, NSLock *);


TF_EC_CHAIN_PROP_IMP(NSLock ,NSString *,name)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSLock ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSLock ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSLock ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSLock ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSLock ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSLock ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSLock ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSLock ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSLock ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSLock ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSLock ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSLock ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSLock ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSLock ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSLock);


@end