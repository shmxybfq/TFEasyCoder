//
//  UIFocusAnimationCoordinator+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFocusAnimationCoordinator+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIFocusAnimationCoordinator (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIFocusAnimationCoordinator, UIFocusAnimationCoordinator *);
TF_EC_MINSTANCE_IMP(UIFocusAnimationCoordinator, UIFocusAnimationCoordinator *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIFocusAnimationCoordinator ,long long,accessibilityNavigationStyle)





@end