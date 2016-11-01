//
//  UIButton+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIButton+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIButton (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIButton, UIButton *);
TF_EC_MINSTANCE_IMP(UIButton, UIButton *);


TF_EC_CHAIN_PROP_IMP(UIButton ,UIEdgeInsets,contentEdgeInsets)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIEdgeInsets,titleEdgeInsets)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,reversesTitleShadowWhenHighlighted)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIEdgeInsets,imageEdgeInsets)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,adjustsImageWhenHighlighted)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,adjustsImageWhenDisabled)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,showsTouchWhenHighlighted)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIColor *,tintColor)


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_CHAIN_PROP_IMP(UIButton ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UIButton ,NSLineBreakMode ,lineBreakMode)
TF_EC_CHAIN_PROP_IMP(UIButton ,CGSize ,titleShadowOffset)







//superclass pros UIControl
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIButton ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UIButton ,long long,contentHorizontalAlignment)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIButton ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIButton ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIButton ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIButton ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIButton ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIButton ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIButton ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIButton ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIButton ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIButton ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIButton ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIButton ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIButton ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIButton ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIButton ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIButton ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIButton ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIButton);


@end
