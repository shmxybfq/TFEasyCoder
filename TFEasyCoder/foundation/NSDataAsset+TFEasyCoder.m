//
//  NSDataAsset+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDataAsset+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDataAsset (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDataAsset, NSDataAsset *);
TF_EC_MINSTANCE_IMP(NSDataAsset, NSDataAsset *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSDataAsset ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSDataAsset);


@end