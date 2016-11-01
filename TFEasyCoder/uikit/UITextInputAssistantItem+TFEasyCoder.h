//
//  UITextInputAssistantItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextInputAssistantItem,UITextInputAssistantItem *);

@interface UITextInputAssistantItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextInputAssistantItem, UITextInputAssistantItem *);
TF_EC_MINSTANCE_INT(UITextInputAssistantItem,UITextInputAssistantItem *);


TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,BOOL,allowsHidingShortcuts);
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSArray *,leadingBarButtonGroups);
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSArray *,trailingBarButtonGroups);





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextInputAssistantItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UITextInputAssistantItem);


@end