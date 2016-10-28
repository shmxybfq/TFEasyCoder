//
//  UITabBarItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITabBarItem,UITabBarItem *);

@interface UITabBarItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UITabBarItem, UITabBarItem *);
TF_EC_MINSTANCE_INT(UITabBarItem,UITabBarItem *);



TF_EC_CHAIN_PROP_INT(UITabBarItem ,UIImage *,selectedImage);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSString *,badgeValue);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,UIOffset,titlePositionAdjustment);

@end