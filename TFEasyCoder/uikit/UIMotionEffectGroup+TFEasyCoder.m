//
//  UIMotionEffectGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMotionEffectGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMotionEffectGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMotionEffectGroup, UIMotionEffectGroup *);
TF_EC_MINSTANCE_IMP(UIMotionEffectGroup, UIMotionEffectGroup *);


TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSArray *,motionEffects)




//superclass pros UIMotionEffect
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMotionEffectGroup ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIMotionEffectGroup);


@end