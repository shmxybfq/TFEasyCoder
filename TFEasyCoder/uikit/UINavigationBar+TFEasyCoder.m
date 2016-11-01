//
//  UINavigationBar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINavigationBar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"


@implementation UINavigationBar (TFEasyCoder)

TF_EC_MSTATIC_IMP(UINavigationBar, UINavigationBar *);
TF_EC_MINSTANCE_IMP(UINavigationBar, UINavigationBar *);


TF_EC_CHAIN_PROP_IMP(UINavigationBar ,long long,barStyle)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,id<UINavigationBarDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,BOOL,translucent)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSArray *,items)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIColor *,barTintColor)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIImage *,shadowImage)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSDictionary *,titleTextAttributes)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIImage *,backIndicatorImage)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIImage *,backIndicatorTransitionMaskImage)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UINavigationBar ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UINavigationBar);


@end
