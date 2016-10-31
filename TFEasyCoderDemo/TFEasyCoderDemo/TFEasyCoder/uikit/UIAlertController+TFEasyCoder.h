//
//  UIAlertController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAlertController,UIAlertController *);

@interface UIAlertController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAlertController, UIAlertController *);
TF_EC_MINSTANCE_INT(UIAlertController,UIAlertController *);


TF_EC_CHAIN_PROP_INT(UIAlertController ,UIAlertAction *,preferredAction)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,message)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UIAlertController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIAlertController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIAlertController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIAlertController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIAlertController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIAlertController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIAlertController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIAlertController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIAlertController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIAlertController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIAlertController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIAlertController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIAlertController ,long long,accessibilityNavigationStyle)





@end