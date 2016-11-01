//
//  UITabBar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITabBar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UITabBar (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITabBar, UITabBar *);
TF_EC_MINSTANCE_IMP(UITabBar, UITabBar *);


TF_EC_CHAIN_PROP_IMP(UITabBar ,id<UITabBarDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSArray *,items)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UITabBarItem *,selectedItem)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIColor *,barTintColor)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIColor *,selectedImageTintColor)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIImage *,backgroundImage)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIImage *,selectionIndicatorImage)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIImage *,shadowImage)
TF_EC_CHAIN_PROP_IMP(UITabBar ,long long,itemPositioning)
TF_EC_CHAIN_PROP_IMP(UITabBar ,double,itemWidth)
TF_EC_CHAIN_PROP_IMP(UITabBar ,double,itemSpacing)
TF_EC_CHAIN_PROP_IMP(UITabBar ,long long,barStyle)
TF_EC_CHAIN_PROP_IMP(UITabBar ,BOOL,translucent)




//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UITabBar ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UITabBar ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UITabBar ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UITabBar ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UITabBar ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITabBar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITabBar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITabBar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITabBar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITabBar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITabBar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITabBar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITabBar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITabBar ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UITabBar);


@end
