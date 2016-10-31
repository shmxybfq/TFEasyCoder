//
//  NSTextTab+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextTab+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTextTab (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTextTab, NSTextTab *);
TF_EC_MINSTANCE_IMP(NSTextTab, NSTextTab *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSTextTab ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSTextTab ,long long,accessibilityNavigationStyle)





@end