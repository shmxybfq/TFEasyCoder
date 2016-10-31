//
//  UIAccessibilityElement+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAccessibilityElement,UIAccessibilityElement *);

@interface UIAccessibilityElement (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAccessibilityElement, UIAccessibilityElement *);
TF_EC_MINSTANCE_INT(UIAccessibilityElement,UIAccessibilityElement *);


TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,BOOL,isAccessibilityElement);
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityLabel);
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityHint);
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityValue);
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,unsigned long long,accessibilityTraits);
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityIdentifier);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAccessibilityElement ,long long,accessibilityNavigationStyle)





@end