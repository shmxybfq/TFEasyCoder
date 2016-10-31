//
//  UIPress+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPress+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPress (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPress, UIPress *);
TF_EC_MINSTANCE_IMP(UIPress, UIPress *);





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPress ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPress ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPress ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPress ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPress ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPress ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPress ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPress ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPress ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPress ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPress ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPress ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPress ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPress ,long long,accessibilityNavigationStyle)





@end