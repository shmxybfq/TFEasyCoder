//
//  UIActivityIndicatorView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIActivityIndicatorView,UIActivityIndicatorView *);

@interface UIActivityIndicatorView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIActivityIndicatorView, UIActivityIndicatorView *);
TF_EC_MINSTANCE_INT(UIActivityIndicatorView,UIActivityIndicatorView *);


TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,long long,activityIndicatorViewStyle);
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,BOOL,hidesWhenStopped);
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,UIColor *,color);





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIActivityIndicatorView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIActivityIndicatorView);


@end
