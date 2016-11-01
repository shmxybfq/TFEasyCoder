//
//  UICollectionViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UICollectionViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewController, UICollectionViewController *);
TF_EC_MINSTANCE_IMP(UICollectionViewController, UICollectionViewController *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,UICollectionView *,collectionView)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,clearsSelectionOnViewWillAppear)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,useLayoutToLayoutNavigationTransitions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,installsStandardGestureForInteractiveMovement)




//superclass pros UIViewController
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,UIView *,view)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UICollectionViewController);


@end
