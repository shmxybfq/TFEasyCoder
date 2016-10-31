//
//  UIMotionEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMotionEffect,UIMotionEffect *);

@interface UIMotionEffect (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMotionEffect, UIMotionEffect *);
TF_EC_MINSTANCE_INT(UIMotionEffect,UIMotionEffect *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMotionEffect ,long long,accessibilityNavigationStyle)





@end