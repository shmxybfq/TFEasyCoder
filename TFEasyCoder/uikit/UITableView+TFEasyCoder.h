//
//  UITableView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableView,UITableView *);

@interface UITableView (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableView, UITableView *);
TF_EC_MINSTANCE_INT(UITableView,UITableView *);


TF_EC_CHAIN_PROP_INT(UITableView ,id<UITableViewDataSource> ,dataSource);
TF_EC_CHAIN_PROP_INT(UITableView ,id<UITableViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UITableView ,double,rowHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,sectionHeaderHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,sectionFooterHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,estimatedSectionHeaderHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,double,estimatedSectionFooterHeight);
TF_EC_CHAIN_PROP_INT(UITableView ,UIEdgeInsets,separatorInset);
TF_EC_CHAIN_PROP_INT(UITableView ,UIView *,backgroundView);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,editing);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsSelection);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsSelectionDuringEditing);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsMultipleSelection);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,allowsMultipleSelectionDuringEditing);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,sectionIndexColor);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,sectionIndexBackgroundColor);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,sectionIndexTrackingBackgroundColor);
TF_EC_CHAIN_PROP_INT(UITableView ,long long,separatorStyle);
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,separatorColor);
TF_EC_CHAIN_PROP_INT(UITableView ,UIVisualEffect *,separatorEffect);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,cellLayoutMarginsFollowReadableWidth);
TF_EC_CHAIN_PROP_INT(UITableView ,UIView *,tableHeaderView);
TF_EC_CHAIN_PROP_INT(UITableView ,UIView *,tableFooterView);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,remembersLastFocusedIndexPath);





//superclass pros UIScrollView
TF_EC_CHAIN_PROP_INT(UITableView ,CGPoint,contentOffset);
TF_EC_CHAIN_PROP_INT(UITableView ,CGSize,contentSize);
TF_EC_CHAIN_PROP_INT(UITableView ,UIEdgeInsets,contentInset);
//TF_EC_CHAIN_PROP_INT(UITableView ,id<UIScrollViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,directionalLockEnabled);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,bounces);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,alwaysBounceVertical);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,alwaysBounceHorizontal);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,pagingEnabled);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,scrollEnabled);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,showsHorizontalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,showsVerticalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UITableView ,UIEdgeInsets,scrollIndicatorInsets);
TF_EC_CHAIN_PROP_INT(UITableView ,long long,indicatorStyle);
TF_EC_CHAIN_PROP_INT(UITableView ,double,decelerationRate);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,delaysContentTouches);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,canCancelContentTouches);
TF_EC_CHAIN_PROP_INT(UITableView ,double,minimumZoomScale);
TF_EC_CHAIN_PROP_INT(UITableView ,double,maximumZoomScale);
TF_EC_CHAIN_PROP_INT(UITableView ,double,zoomScale);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,bouncesZoom);
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,scrollsToTop);
TF_EC_CHAIN_PROP_INT(UITableView ,long long,keyboardDismissMode);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UITableView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UITableView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UITableView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UITableView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UITableView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UITableView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITableView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITableView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITableView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITableView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITableView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITableView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITableView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITableView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITableView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITableView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITableView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITableView ,long long,accessibilityNavigationStyle)





@end
