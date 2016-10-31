//
//  UIApplication+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIApplication,UIApplication *);

@interface UIApplication (TFEasyCoder)

TF_EC_MSTATIC_INT(UIApplication, UIApplication *);
TF_EC_MINSTANCE_INT(UIApplication,UIApplication *);


TF_EC_CHAIN_PROP_INT(UIApplication ,id<UIApplicationDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UIApplication ,BOOL,idleTimerDisabled)
TF_EC_CHAIN_PROP_INT(UIApplication ,BOOL,networkActivityIndicatorVisible)
TF_EC_CHAIN_PROP_INT(UIApplication ,long long,applicationIconBadgeNumber)
TF_EC_CHAIN_PROP_INT(UIApplication ,BOOL,applicationSupportsShakeToEdit)




//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIApplication ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIApplication ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIApplication ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIApplication ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIApplication ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIApplication ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIApplication ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIApplication ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIApplication ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIApplication ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIApplication ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIApplication ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIApplication ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIApplication ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIApplication ,long long,accessibilityNavigationStyle)





@end