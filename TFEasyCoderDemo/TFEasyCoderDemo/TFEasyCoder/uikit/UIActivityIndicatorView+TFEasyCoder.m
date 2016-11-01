//
//  UIActivityIndicatorView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActivityIndicatorView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIActivityIndicatorView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActivityIndicatorView, UIActivityIndicatorView *);
TF_EC_MINSTANCE_IMP(UIActivityIndicatorView, UIActivityIndicatorView *);


TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,long long,activityIndicatorViewStyle)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,BOOL,hidesWhenStopped)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,UIColor *,color)





//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIActivityIndicatorView ,long long,accessibilityNavigationStyle)





@end
