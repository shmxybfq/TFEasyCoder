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

@end