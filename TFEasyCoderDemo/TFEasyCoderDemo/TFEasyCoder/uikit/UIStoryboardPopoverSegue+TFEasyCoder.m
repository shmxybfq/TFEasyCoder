//
//  UIStoryboardPopoverSegue+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIStoryboardPopoverSegue+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIStoryboardPopoverSegue (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIStoryboardPopoverSegue, UIStoryboardPopoverSegue *);
TF_EC_MINSTANCE_IMP(UIStoryboardPopoverSegue, UIStoryboardPopoverSegue *);






//superclass pros UIStoryboardSegue
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIStoryboardPopoverSegue ,long long,accessibilityNavigationStyle)





@end