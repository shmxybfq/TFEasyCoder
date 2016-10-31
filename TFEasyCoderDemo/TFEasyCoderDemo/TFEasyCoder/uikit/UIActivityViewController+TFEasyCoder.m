//
//  UIActivityViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActivityViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIActivityViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActivityViewController, UIActivityViewController *);
TF_EC_MINSTANCE_IMP(UIActivityViewController, UIActivityViewController *);


TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSArray *,excludedActivityTypes)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,long long,accessibilityNavigationStyle)





@end