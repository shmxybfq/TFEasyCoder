//
//  UIAlertController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAlertController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAlertController, UIAlertController *);
TF_EC_MINSTANCE_IMP(UIAlertController, UIAlertController *);



TF_EC_CHAIN_PROP_IMP(UIAlertController ,UIAlertAction *,preferredAction)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,message)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UIAlertController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIAlertController ,long long,accessibilityNavigationStyle)





@end