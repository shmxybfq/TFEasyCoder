//
//  UIBarButtonItemGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBarButtonItemGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBarButtonItemGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBarButtonItemGroup, UIBarButtonItemGroup *);
TF_EC_MINSTANCE_IMP(UIBarButtonItemGroup, UIBarButtonItemGroup *);


TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSArray *,barButtonItems)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,UIBarButtonItem *,representativeItem)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIBarButtonItemGroup);


@end