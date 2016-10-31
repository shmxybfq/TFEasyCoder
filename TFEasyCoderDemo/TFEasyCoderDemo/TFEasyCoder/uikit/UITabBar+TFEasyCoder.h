//
//  UITabBar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITabBar,UITabBar *);

@interface UITabBar (TFEasyCoder)

TF_EC_MSTATIC_INT(UITabBar, UITabBar *);
TF_EC_MINSTANCE_INT(UITabBar,UITabBar *);


TF_EC_CHAIN_PROP_INT(UITabBar ,id<UITabBarDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UITabBar ,NSArray *,items);
TF_EC_CHAIN_PROP_INT(UITabBar ,UITabBarItem *,selectedItem);
TF_EC_CHAIN_PROP_INT(UITabBar ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UITabBar ,UIColor *,barTintColor);
TF_EC_CHAIN_PROP_INT(UITabBar ,UIColor *,selectedImageTintColor);
TF_EC_CHAIN_PROP_INT(UITabBar ,UIImage *,backgroundImage);
TF_EC_CHAIN_PROP_INT(UITabBar ,UIImage *,selectionIndicatorImage);
TF_EC_CHAIN_PROP_INT(UITabBar ,UIImage *,shadowImage);
TF_EC_CHAIN_PROP_INT(UITabBar ,long long,itemPositioning);
TF_EC_CHAIN_PROP_INT(UITabBar ,double,itemWidth);
TF_EC_CHAIN_PROP_INT(UITabBar ,double,itemSpacing);
TF_EC_CHAIN_PROP_INT(UITabBar ,long long,barStyle);
TF_EC_CHAIN_PROP_INT(UITabBar ,BOOL,translucent);





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UITabBar ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UITabBar ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UITabBar ,long long,tag)
TF_EC_CHAIN_PROP_INT(UITabBar ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UITabBar ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITabBar ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITabBar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITabBar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITabBar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITabBar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITabBar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITabBar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITabBar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITabBar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITabBar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITabBar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITabBar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITabBar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITabBar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITabBar ,long long,accessibilityNavigationStyle)





@end