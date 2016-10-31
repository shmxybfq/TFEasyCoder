//
//  UITextInputAssistantItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextInputAssistantItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextInputAssistantItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextInputAssistantItem, UITextInputAssistantItem *);
TF_EC_MINSTANCE_IMP(UITextInputAssistantItem, UITextInputAssistantItem *);


TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,BOOL,allowsHidingShortcuts)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSArray *,leadingBarButtonGroups)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSArray *,trailingBarButtonGroups)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextInputAssistantItem ,long long,accessibilityNavigationStyle)





@end