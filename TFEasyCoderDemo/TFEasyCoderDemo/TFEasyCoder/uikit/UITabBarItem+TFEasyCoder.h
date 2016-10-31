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




//superclass pros UIBarItem
TF_EC_CHAIN_PROP_INT(UITabBarItem ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,UIImage *,landscapeImagePhone);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,UIEdgeInsets,imageInsets);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,UIEdgeInsets,landscapeImagePhoneInsets);
TF_EC_CHAIN_PROP_INT(UITabBarItem ,long long,tag);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITabBarItem ,long long,accessibilityNavigationStyle)





@end