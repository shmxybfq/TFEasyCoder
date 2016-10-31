//
//  UIDocumentMenuViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDocumentMenuViewController,UIDocumentMenuViewController *);

@interface UIDocumentMenuViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDocumentMenuViewController, UIDocumentMenuViewController *);
TF_EC_MINSTANCE_INT(UIDocumentMenuViewController,UIDocumentMenuViewController *);


TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,id<UIDocumentMenuDelegate> ,delegate);





//superclass pros UIViewController
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,UITabBarItem *,tabBarItem)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,hidesBottomBarWhenPushed)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,id<UIViewControllerTransitioningDelegate>  ,transitioningDelegate)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,UIView *,view)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,definesPresentationContext)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,providesPresentationContextTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,long long,modalTransitionStyle)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,long long,modalPresentationStyle)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,modalPresentationCapturesStatusBarAppearance)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,wantsFullScreenLayout)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,unsigned long long,edgesForExtendedLayout)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,extendedLayoutIncludesOpaqueBars)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,automaticallyAdjustsScrollViewInsets)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,CGSize,preferredContentSize)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,CGSize,contentSizeForViewInPopover)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,modalInPopover)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDocumentMenuViewController ,long long,accessibilityNavigationStyle)





@end