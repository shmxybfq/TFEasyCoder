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


@end