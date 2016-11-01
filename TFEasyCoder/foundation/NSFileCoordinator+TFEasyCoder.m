//
//  NSFileCoordinator+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileCoordinator+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileCoordinator (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileCoordinator, NSFileCoordinator *);
TF_EC_MINSTANCE_IMP(NSFileCoordinator, NSFileCoordinator *);


TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,NSString *,purposeIdentifier)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFileCoordinator ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSFileCoordinator);


@end