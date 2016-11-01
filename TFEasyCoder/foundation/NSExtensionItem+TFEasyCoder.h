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




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSExtensionItem ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSExtensionItem);


@end