//
//  UIWindow+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIWindow,UIWindow *);

@interface UIWindow (TFEasyCoder)

TF_EC_MSTATIC_INT(UIWindow, UIWindow *);
TF_EC_MINSTANCE_INT(UIWindow,UIWindow *);


TF_EC_CHAIN_PROP_INT(UIWindow ,UIScreen *,screen);
TF_EC_CHAIN_PROP_INT(UIWindow ,double,windowLevel);
TF_EC_CHAIN_PROP_INT(UIWindow ,UIViewController *,rootViewController);






//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIWindow ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIWindow ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIWindow ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIWindow ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIWindow ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIWindow ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIWindow ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIWindow ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIWindow ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIWindow ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIWindow ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIWindow ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIWindow ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIWindow ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIWindow ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIWindow ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIWindow ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIWindow ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIWindow ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIWindow ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIWindow ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIWindow ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIWindow);


@end
