//
//  UIVideoEditorController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIVideoEditorController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIVideoEditorController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIVideoEditorController, UIVideoEditorController *);
TF_EC_MINSTANCE_IMP(UIVideoEditorController, UIVideoEditorController *);


TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,id ,delegate)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSString *,videoPath)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,double,videoMaximumDuration)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,long long,videoQuality)




//superclass pros UINavigationController
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSArray *,viewControllers)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,navigationBarHidden)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,toolbarHidden)
//TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,id<UINavigationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,hidesBarsWhenKeyboardAppears)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,hidesBarsOnSwipe)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,hidesBarsWhenVerticallyCompact)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,hidesBarsOnTap)
//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,long long,accessibilityNavigationStyle)





@end