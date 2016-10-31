//
//  UIProgressView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIProgressView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIProgressView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIProgressView, UIProgressView *);
TF_EC_MINSTANCE_IMP(UIProgressView, UIProgressView *);


TF_EC_CHAIN_PROP_IMP(UIProgressView ,long long,progressViewStyle)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,float,progress)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIColor *,progressTintColor)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIColor *,trackTintColor)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIImage *,progressImage)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIImage *,trackImage)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSProgress *,observedProgress)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIProgressView ,long long,accessibilityNavigationStyle)





@end