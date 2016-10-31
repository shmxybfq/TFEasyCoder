//
//  UIFocusGuide+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFocusGuide+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIFocusGuide (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIFocusGuide, UIFocusGuide *);
TF_EC_MINSTANCE_IMP(UIFocusGuide, UIFocusGuide *);


TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,UIView *,preferredFocusedView)




//superclass pros UILayoutGuide
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,UIView *,owningView)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,NSString *,identifier)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,long long,accessibilityNavigationStyle)





@end