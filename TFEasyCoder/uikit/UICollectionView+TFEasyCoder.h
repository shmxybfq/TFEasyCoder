//
//  UICollectionView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionView,UICollectionView *);

@interface UICollectionView (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionView, UICollectionView *);
TF_EC_MINSTANCE_INT(UICollectionView,UICollectionView *);


TF_EC_CHAIN_PROP_INT(UICollectionView ,UICollectionViewLayout *,collectionViewLayout);
TF_EC_CHAIN_PROP_INT(UICollectionView ,id<UICollectionViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UICollectionView ,id<UICollectionViewDataSource> ,dataSource);
TF_EC_CHAIN_PROP_INT(UICollectionView ,UIView *,backgroundView);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,allowsSelection);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,allowsMultipleSelection);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,remembersLastFocusedIndexPath);





//superclass pros UIScrollView
TF_EC_CHAIN_PROP_INT(UICollectionView ,CGPoint,contentOffset);
TF_EC_CHAIN_PROP_INT(UICollectionView ,CGSize,contentSize);
TF_EC_CHAIN_PROP_INT(UICollectionView ,UIEdgeInsets,contentInset);
//TF_EC_CHAIN_PROP_INT(UICollectionView ,id<UIScrollViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,directionalLockEnabled);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,bounces);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,alwaysBounceVertical);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,alwaysBounceHorizontal);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,pagingEnabled);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,scrollEnabled);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,showsHorizontalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,showsVerticalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UICollectionView ,UIEdgeInsets,scrollIndicatorInsets);
TF_EC_CHAIN_PROP_INT(UICollectionView ,long long,indicatorStyle);
TF_EC_CHAIN_PROP_INT(UICollectionView ,double,decelerationRate);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,delaysContentTouches);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,canCancelContentTouches);
TF_EC_CHAIN_PROP_INT(UICollectionView ,double,minimumZoomScale);
TF_EC_CHAIN_PROP_INT(UICollectionView ,double,maximumZoomScale);
TF_EC_CHAIN_PROP_INT(UICollectionView ,double,zoomScale);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,bouncesZoom);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,scrollsToTop);
TF_EC_CHAIN_PROP_INT(UICollectionView ,long long,keyboardDismissMode);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UICollectionView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UICollectionView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UICollectionView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UICollectionView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UICollectionView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UICollectionView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UICollectionView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionView ,long long,accessibilityNavigationStyle)





@end
