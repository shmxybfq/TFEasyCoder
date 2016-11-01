//
//  UIRegion+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIRegion+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIRegion (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIRegion, UIRegion *);
TF_EC_MINSTANCE_IMP(UIRegion, UIRegion *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIRegion ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIRegion ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIRegion ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIRegion ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIRegion ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIRegion ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIRegion ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIRegion ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIRegion ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIRegion ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIRegion ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIRegion ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIRegion ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIRegion ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIRegion);


@end