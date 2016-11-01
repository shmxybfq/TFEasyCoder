//
//  UIBlurEffect+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBlurEffect+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBlurEffect (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBlurEffect, UIBlurEffect *);
TF_EC_MINSTANCE_IMP(UIBlurEffect, UIBlurEffect *);






//superclass pros UIVisualEffect
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIBlurEffect ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIBlurEffect);


@end