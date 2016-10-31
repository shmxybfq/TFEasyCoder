//
//  UITableView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableView, UITableView *);
TF_EC_MINSTANCE_IMP(UITableView, UITableView *);


TF_EC_CHAIN_PROP_IMP(UITableView ,id<UITableViewDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UITableView ,id<UITableViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,rowHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,sectionHeaderHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,sectionFooterHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,estimatedSectionHeaderHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,estimatedSectionFooterHeight)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIEdgeInsets,separatorInset)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIView *,backgroundView)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,editing)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsSelection)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsSelectionDuringEditing)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsMultipleSelection)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,allowsMultipleSelectionDuringEditing)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,sectionIndexColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,sectionIndexBackgroundColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,sectionIndexTrackingBackgroundColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,long long,separatorStyle)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIColor *,separatorColor)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIVisualEffect *,separatorEffect)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,cellLayoutMarginsFollowReadableWidth)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIView *,tableHeaderView)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIView *,tableFooterView)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,remembersLastFocusedIndexPath)





//superclass pros UIScrollView
TF_EC_CHAIN_PROP_IMP(UITableView ,CGPoint,contentOffset)
TF_EC_CHAIN_PROP_IMP(UITableView ,CGSize,contentSize)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIEdgeInsets,contentInset)
//TF_EC_CHAIN_PROP_IMP(UITableView ,id<UIScrollViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,directionalLockEnabled)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,bounces)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,alwaysBounceVertical)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,alwaysBounceHorizontal)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,pagingEnabled)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,scrollEnabled)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,showsHorizontalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,showsVerticalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIEdgeInsets,scrollIndicatorInsets)
TF_EC_CHAIN_PROP_IMP(UITableView ,long long,indicatorStyle)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,decelerationRate)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,delaysContentTouches)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,canCancelContentTouches)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,minimumZoomScale)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,maximumZoomScale)
TF_EC_CHAIN_PROP_IMP(UITableView ,double,zoomScale)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,bouncesZoom)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,scrollsToTop)
TF_EC_CHAIN_PROP_IMP(UITableView ,long long,keyboardDismissMode)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UITableView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UITableView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UITableView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UITableView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UITableView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITableView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITableView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITableView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITableView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITableView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITableView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITableView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITableView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITableView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITableView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITableView ,long long,accessibilityNavigationStyle)





@end