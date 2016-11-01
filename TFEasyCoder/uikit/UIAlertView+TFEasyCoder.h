//
//  UIAlertView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_BLOCK(UIAlertView,UIAlertView *);

@interface UIAlertView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAlertView, UIAlertView *);
TF_EC_MINSTANCE_INT(UIAlertView,UIAlertView *);


TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,message);
TF_EC_CHAIN_PROP_INT(UIAlertView ,long long,cancelButtonIndex);
TF_EC_CHAIN_PROP_INT(UIAlertView ,long long,alertViewStyle);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIAlertView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIAlertView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIAlertView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIAlertView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIAlertView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIAlertView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIAlertView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAlertView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAlertView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAlertView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAlertView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAlertView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAlertView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAlertView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAlertView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAlertView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIAlertView);


@end
