//
//  UIInputViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIInputViewController,UIInputViewController *);

@interface UIInputViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIInputViewController, UIInputViewController *);
TF_EC_MINSTANCE_INT(UIInputViewController,UIInputViewController *);


TF_EC_CHAIN_PROP_INT(UIInputViewController ,UIInputView *,inputView);
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSString *,primaryLanguage);




//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UIInputViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIInputViewController ,long long,accessibilityNavigationStyle)





@end