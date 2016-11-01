//
//  UITextSelectionRect+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextSelectionRect+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextSelectionRect (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextSelectionRect, UITextSelectionRect *);
TF_EC_MINSTANCE_IMP(UITextSelectionRect, UITextSelectionRect *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextSelectionRect ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UITextSelectionRect);


@end