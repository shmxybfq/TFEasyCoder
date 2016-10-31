//
//  UIProgressView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIProgressView,UIProgressView *);

@interface UIProgressView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIProgressView, UIProgressView *);
TF_EC_MINSTANCE_INT(UIProgressView,UIProgressView *);


TF_EC_CHAIN_PROP_INT(UIProgressView ,long long,progressViewStyle);
TF_EC_CHAIN_PROP_INT(UIProgressView ,float,progress);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIColor *,progressTintColor);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIColor *,trackTintColor);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIImage *,progressImage);
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIImage *,trackImage);
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSProgress *,observedProgress);




//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIProgressView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIProgressView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIProgressView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIProgressView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIProgressView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIProgressView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIProgressView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIProgressView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIProgressView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIProgressView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIProgressView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIProgressView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIProgressView ,long long,accessibilityNavigationStyle)





@end