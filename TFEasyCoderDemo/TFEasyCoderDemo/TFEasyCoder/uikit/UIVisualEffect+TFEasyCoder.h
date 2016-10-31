//
//  UIVisualEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIVisualEffect,UIVisualEffect *);

@interface UIVisualEffect (TFEasyCoder)

TF_EC_MSTATIC_INT(UIVisualEffect, UIVisualEffect *);
TF_EC_MINSTANCE_INT(UIVisualEffect,UIVisualEffect *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIVisualEffect ,long long,accessibilityNavigationStyle)





@end