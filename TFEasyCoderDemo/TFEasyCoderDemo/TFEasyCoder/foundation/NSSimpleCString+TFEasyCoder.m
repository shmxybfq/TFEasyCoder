//
//  NSSimpleCString+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSSimpleCString+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSSimpleCString (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSSimpleCString, NSSimpleCString *);
TF_EC_MINSTANCE_IMP(NSSimpleCString, NSSimpleCString *);






//superclass pros NSString
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSSimpleCString ,long long,accessibilityNavigationStyle)





@end