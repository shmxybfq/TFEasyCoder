//
//  UIImageView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIImageView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIImageView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIImageView, UIImageView *);
TF_EC_MINSTANCE_IMP(UIImageView, UIImageView *);


TF_EC_CHAIN_PROP_IMP(UIImageView ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(UIImageView ,UIImage *,highlightedImage)
//TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSArray *,animationImages)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSArray *,highlightedAnimationImages)
TF_EC_CHAIN_PROP_IMP(UIImageView ,double,animationDuration)
TF_EC_CHAIN_PROP_IMP(UIImageView ,long long,animationRepeatCount)
TF_EC_CHAIN_PROP_IMP(UIImageView ,UIColor *,tintColor)





//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIImageView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIImageView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIImageView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIImageView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIImageView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIImageView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIImageView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIImageView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIImageView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIImageView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIImageView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIImageView ,long long,accessibilityNavigationStyle)





@end
