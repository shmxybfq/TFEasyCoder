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


@end