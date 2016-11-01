//
//  UIFocusUpdateContext+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFocusUpdateContext+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIFocusUpdateContext (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIFocusUpdateContext, UIFocusUpdateContext *);
TF_EC_MINSTANCE_IMP(UIFocusUpdateContext, UIFocusUpdateContext *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIFocusUpdateContext ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIFocusUpdateContext);


@end