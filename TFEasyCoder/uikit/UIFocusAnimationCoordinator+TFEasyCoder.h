//
//  UIFocusAnimationCoordinator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFocusAnimationCoordinator,UIFocusAnimationCoordinator *);

@interface UIFocusAnimationCoordinator (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFocusAnimationCoordinator, UIFocusAnimationCoordinator *);
TF_EC_MINSTANCE_INT(UIFocusAnimationCoordinator,UIFocusAnimationCoordinator *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIFocusAnimationCoordinator ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIFocusAnimationCoordinator);


@end