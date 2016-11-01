//
//  UINavigationItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UINavigationItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UINavigationItem, UINavigationItem *);
TF_EC_MINSTANCE_IMP(UINavigationItem, UINavigationItem *);


TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIView *,titleView)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,prompt)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIBarButtonItem *,backBarButtonItem)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,hidesBackButton)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSArray *,leftBarButtonItems)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSArray *,rightBarButtonItems)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,leftItemsSupplementBackButton)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIBarButtonItem *,leftBarButtonItem)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIBarButtonItem *,rightBarButtonItem)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UINavigationItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UINavigationItem);


@end