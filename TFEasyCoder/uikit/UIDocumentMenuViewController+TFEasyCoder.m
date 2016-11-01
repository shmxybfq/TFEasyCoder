//
//  UIDocumentMenuViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDocumentMenuViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UIDocumentMenuViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDocumentMenuViewController, UIDocumentMenuViewController *);
TF_EC_MINSTANCE_IMP(UIDocumentMenuViewController, UIDocumentMenuViewController *);


TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,id<UIDocumentMenuDelegate>  ,delegate)





//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIDocumentMenuViewController);


@end
