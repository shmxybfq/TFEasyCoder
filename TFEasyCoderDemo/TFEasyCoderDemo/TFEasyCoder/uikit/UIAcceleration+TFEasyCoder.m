//
//  UIAcceleration+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAcceleration+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAcceleration (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAcceleration, UIAcceleration *);
TF_EC_MINSTANCE_IMP(UIAcceleration, UIAcceleration *);




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIAcceleration ,long long,accessibilityNavigationStyle)





@end
