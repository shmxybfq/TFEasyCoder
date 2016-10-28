//
//  NSExtensionItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSExtensionItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSExtensionItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSExtensionItem, NSExtensionItem *);
TF_EC_MINSTANCE_IMP(NSExtensionItem, NSExtensionItem *);


TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSAttributedString *,attributedTitle)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSAttributedString *,attributedContentText)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSArray *,attachments)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSDictionary *,userInfo)

@end