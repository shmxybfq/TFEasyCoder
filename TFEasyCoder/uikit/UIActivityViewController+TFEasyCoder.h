//
//  UIActivityViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIActivityViewController,UIActivityViewController *);

@interface UIActivityViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIActivityViewController, UIActivityViewController *);
TF_EC_MINSTANCE_INT(UIActivityViewController,UIActivityViewController *);

TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSArray *,excludedActivityTypes)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIActivityViewController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIActivityViewController);


@end