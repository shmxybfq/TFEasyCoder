//
//  UIInputView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIInputView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIInputView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIInputView, UIInputView *);
TF_EC_MINSTANCE_IMP(UIInputView, UIInputView *);


TF_EC_CHAIN_PROP_IMP(UIInputView ,BOOL,allowsSelfSizing)





//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIInputView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIInputView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIInputView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIInputView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIInputView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIInputView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIInputView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIInputView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIInputView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIInputView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIInputView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIInputView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIInputView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIInputView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIInputView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIInputView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIInputView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIInputView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIInputView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIInputView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIInputView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIInputView ,long long,accessibilityNavigationStyle)





@end
