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




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSExtensionItem ,long long,accessibilityNavigationStyle)





@end