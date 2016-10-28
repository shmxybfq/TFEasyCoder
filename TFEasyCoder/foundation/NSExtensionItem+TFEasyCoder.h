//
//  NSExtensionItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSExtensionItem,NSExtensionItem *);

@interface NSExtensionItem (TFEasyCoder)

TF_EC_MSTATIC_INT(NSExtensionItem, NSExtensionItem *);
TF_EC_MINSTANCE_INT(NSExtensionItem,NSExtensionItem *);


TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSAttributedString *,attributedTitle);
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSAttributedString *,attributedContentText);
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSArray *,attachments);
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSDictionary *,userInfo);

@end