//
//  UIFocusUpdateContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFocusUpdateContext,UIFocusUpdateContext *);

@interface UIFocusUpdateContext (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFocusUpdateContext, UIFocusUpdateContext *);
TF_EC_MINSTANCE_INT(UIFocusUpdateContext,UIFocusUpdateContext *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIFocusUpdateContext ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIFocusUpdateContext);


@end