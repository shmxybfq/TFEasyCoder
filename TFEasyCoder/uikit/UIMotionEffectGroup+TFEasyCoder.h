//
//  UIMotionEffectGroup+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMotionEffectGroup,UIMotionEffectGroup *);

@interface UIMotionEffectGroup (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMotionEffectGroup, UIMotionEffectGroup *);
TF_EC_MINSTANCE_INT(UIMotionEffectGroup,UIMotionEffectGroup *);


TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,NSArray *,motionEffects);




//superclass pros UIMotionEffect
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMotionEffectGroup ,long long,accessibilityNavigationStyle)





@end