//
//  UIInputViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIInputViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIInputViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIInputViewController, UIInputViewController *);
TF_EC_MINSTANCE_IMP(UIInputViewController, UIInputViewController *);


TF_EC_CHAIN_PROP_IMP(UIInputViewController ,UIInputView *,inputView)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSString *,primaryLanguage)




//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,long long,accessibilityNavigationStyle)





@end