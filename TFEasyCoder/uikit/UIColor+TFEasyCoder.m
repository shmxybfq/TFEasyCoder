//
//  UIColor+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIColor+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIColor (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIColor, UIColor *);
TF_EC_MINSTANCE_IMP(UIColor, UIColor *);





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIColor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIColor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIColor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIColor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIColor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIColor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIColor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIColor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIColor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIColor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIColor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIColor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIColor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIColor ,long long,accessibilityNavigationStyle)





@end