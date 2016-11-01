//
//  UIAlertView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAlertView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAlertView, UIAlertView *);
TF_EC_MINSTANCE_IMP(UIAlertView, UIAlertView *);


TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,message)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,long long,cancelButtonIndex)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,long long,alertViewStyle)





//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIAlertView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIAlertView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIAlertView);


@end
