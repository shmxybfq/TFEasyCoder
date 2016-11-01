//
//  UIStoryboardSegue+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIStoryboardSegue+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIStoryboardSegue (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIStoryboardSegue, UIStoryboardSegue *);
TF_EC_MINSTANCE_IMP(UIStoryboardSegue, UIStoryboardSegue *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIStoryboardSegue ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIStoryboardSegue);


@end