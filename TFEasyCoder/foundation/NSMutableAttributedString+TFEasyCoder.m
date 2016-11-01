//
//  NSMutableAttributedString+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableAttributedString+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableAttributedString (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableAttributedString, NSMutableAttributedString *);
TF_EC_MINSTANCE_IMP(NSMutableAttributedString, NSMutableAttributedString *);






//superclass pros NSAttributedString
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableAttributedString ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMutableAttributedString);


@end