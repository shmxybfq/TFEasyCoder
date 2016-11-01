//
//  UITouch+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITouch+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITouch (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITouch, UITouch *);
TF_EC_MINSTANCE_IMP(UITouch, UITouch *);







//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITouch ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITouch ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITouch ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITouch ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITouch ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITouch ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITouch ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITouch ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITouch ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITouch ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITouch ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITouch ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITouch ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITouch ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UITouch);


@end