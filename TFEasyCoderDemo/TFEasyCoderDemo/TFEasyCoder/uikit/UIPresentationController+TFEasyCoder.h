//
//  UIPresentationController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPresentationController,UIPresentationController *);

@interface UIPresentationController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPresentationController, UIPresentationController *);
TF_EC_MINSTANCE_INT(UIPresentationController,UIPresentationController *);


TF_EC_CHAIN_PROP_INT(UIPresentationController ,id<UIAdaptivePresentationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,UITraitCollection *,overrideTraitCollection)





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPresentationController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPresentationController ,long long,accessibilityNavigationStyle)





@end