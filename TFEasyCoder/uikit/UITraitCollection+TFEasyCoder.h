//
//  UITraitCollection+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITraitCollection,UITraitCollection *);

@interface UITraitCollection (TFEasyCoder)

TF_EC_MSTATIC_INT(UITraitCollection, UITraitCollection *);
TF_EC_MINSTANCE_INT(UITraitCollection,UITraitCollection *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITraitCollection ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITraitCollection ,long long,accessibilityNavigationStyle)





@end