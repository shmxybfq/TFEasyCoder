//
//  UITextRange+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextRange+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextRange (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextRange, UITextRange *);
TF_EC_MINSTANCE_IMP(UITextRange, UITextRange *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextRange ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextRange ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextRange ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextRange ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextRange ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextRange ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextRange ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextRange ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextRange ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextRange ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextRange ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextRange ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextRange ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextRange ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UITextRange);


@end