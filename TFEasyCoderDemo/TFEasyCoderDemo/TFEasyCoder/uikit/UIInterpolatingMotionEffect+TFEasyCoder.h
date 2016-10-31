//
//  UIInterpolatingMotionEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIInterpolatingMotionEffect,UIInterpolatingMotionEffect *);

@interface UIInterpolatingMotionEffect (TFEasyCoder)

TF_EC_MSTATIC_INT(UIInterpolatingMotionEffect, UIInterpolatingMotionEffect *);
TF_EC_MINSTANCE_INT(UIInterpolatingMotionEffect,UIInterpolatingMotionEffect *);






//superclass pros UIMotionEffect
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIInterpolatingMotionEffect ,long long,accessibilityNavigationStyle)





@end