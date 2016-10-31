//
//  UIAccessibilityCustomAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAccessibilityCustomAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAccessibilityCustomAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAccessibilityCustomAction, UIAccessibilityCustomAction *);
TF_EC_MINSTANCE_IMP(UIAccessibilityCustomAction, UIAccessibilityCustomAction *);


TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,SEL,selector)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,long long,accessibilityNavigationStyle)





@end