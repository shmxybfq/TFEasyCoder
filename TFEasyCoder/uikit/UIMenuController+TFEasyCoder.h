//
//  UIMenuController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMenuController,UIMenuController *);

@interface UIMenuController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMenuController, UIMenuController *);
TF_EC_MINSTANCE_INT(UIMenuController,UIMenuController *);


TF_EC_CHAIN_PROP_INT(UIMenuController ,BOOL,menuVisible);
TF_EC_CHAIN_PROP_INT(UIMenuController ,long long,arrowDirection);
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSArray *,menuItems);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIMenuController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIMenuController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIMenuController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIMenuController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIMenuController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIMenuController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIMenuController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIMenuController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIMenuController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIMenuController);


@end