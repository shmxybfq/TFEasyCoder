//
//  UIVisualEffectView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIVisualEffectView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIVisualEffectView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIVisualEffectView, UIVisualEffectView *);
TF_EC_MINSTANCE_IMP(UIVisualEffectView, UIVisualEffectView *);


TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,UIVisualEffect *,effect)





//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIVisualEffectView ,long long,accessibilityNavigationStyle)





@end
