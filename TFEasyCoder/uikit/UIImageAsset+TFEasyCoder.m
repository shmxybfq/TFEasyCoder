//
//  UIImageAsset+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImageAsset+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIImageAsset (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIImageAsset, UIImageAsset *);
TF_EC_MINSTANCE_IMP(UIImageAsset, UIImageAsset *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIImageAsset ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIImageAsset);


@end