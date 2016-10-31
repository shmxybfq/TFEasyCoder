//
//  UITextInputMode+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextInputMode+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextInputMode (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextInputMode, UITextInputMode *);
TF_EC_MINSTANCE_IMP(UITextInputMode, UITextInputMode *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextInputMode ,long long,accessibilityNavigationStyle)





@end