//
//  UIVibrancyEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIVibrancyEffect,UIVibrancyEffect *);

@interface UIVibrancyEffect (TFEasyCoder)

TF_EC_MSTATIC_INT(UIVibrancyEffect, UIVibrancyEffect *);
TF_EC_MINSTANCE_INT(UIVibrancyEffect,UIVibrancyEffect *);






//superclass pros UIVisualEffect
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIVibrancyEffect ,long long,accessibilityNavigationStyle)





@end