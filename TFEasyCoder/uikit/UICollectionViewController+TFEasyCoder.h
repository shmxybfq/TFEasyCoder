//
//  UICollectionViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewController,UICollectionViewController *);

@interface UICollectionViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewController, UICollectionViewController *);
TF_EC_MINSTANCE_INT(UICollectionViewController,UICollectionViewController *);


TF_EC_CHAIN_PROP_INT(UICollectionViewController ,UICollectionView *,collectionView);
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,clearsSelectionOnViewWillAppear);
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,useLayoutToLayoutNavigationTransitions);
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,installsStandardGestureForInteractiveMovement);




//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UICollectionViewController);


@end