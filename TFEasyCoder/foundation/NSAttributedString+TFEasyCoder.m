//
//  NSAttributedString+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSAttributedString+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSAttributedString (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSAttributedString, NSAttributedString *);
TF_EC_MINSTANCE_IMP(NSAttributedString, NSAttributedString *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSAttributedString ,long long,accessibilityNavigationStyle)





@end