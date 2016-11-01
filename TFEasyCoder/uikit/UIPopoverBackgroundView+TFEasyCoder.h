//
//  UIPopoverBackgroundView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPopoverBackgroundView,UIPopoverBackgroundView *);

@interface UIPopoverBackgroundView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPopoverBackgroundView, UIPopoverBackgroundView *);
TF_EC_MINSTANCE_INT(UIPopoverBackgroundView,UIPopoverBackgroundView *);


TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,double,arrowOffset);
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,unsigned long long,arrowDirection);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPopoverBackgroundView ,long long,accessibilityNavigationStyle)





@end
