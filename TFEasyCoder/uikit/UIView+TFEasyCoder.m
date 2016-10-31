//
//  UIView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIView, UIView *);
TF_EC_MINSTANCE_IMP(UIView, UIView *);


TF_EC_CHAIN_PROP_IMP(UIView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIView ,CGRect,frame)




//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIView ,long long,accessibilityNavigationStyle)





@end