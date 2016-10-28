//
//  UITabBar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITabBar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

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

@end