//
//  UITabBarItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITabBarItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITabBarItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITabBarItem, UITabBarItem *);
TF_EC_MINSTANCE_IMP(UITabBarItem, UITabBarItem *);



TF_EC_CHAIN_PROP_IMP(UITabBarItem ,UIImage *,selectedImage)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSString *,badgeValue)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,UIOffset,titlePositionAdjustment)




//superclass pros UIBarItem
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,UIImage *,landscapeImagePhone)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,UIEdgeInsets,imageInsets)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,UIEdgeInsets,landscapeImagePhoneInsets)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,long long,tag)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITabBarItem ,long long,accessibilityNavigationStyle)





@end