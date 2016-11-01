//
//  UIApplication+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIApplication+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIApplication (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIApplication, UIApplication *);
TF_EC_MINSTANCE_IMP(UIApplication, UIApplication *);


TF_EC_CHAIN_PROP_IMP(UIApplication ,id<UIApplicationDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,idleTimerDisabled)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,networkActivityIndicatorVisible)
TF_EC_CHAIN_PROP_IMP(UIApplication ,long long,applicationIconBadgeNumber)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,applicationSupportsShakeToEdit)




//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIApplication ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIApplication ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIApplication ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIApplication ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIApplication ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIApplication ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIApplication ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIApplication ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIApplication ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIApplication ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIApplication ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIApplication ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIApplication);


@end