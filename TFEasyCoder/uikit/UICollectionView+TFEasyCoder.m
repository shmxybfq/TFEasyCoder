//
//  UICollectionView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionView, UICollectionView *);
TF_EC_MINSTANCE_IMP(UICollectionView, UICollectionView *);


TF_EC_CHAIN_PROP_IMP(UICollectionView ,UICollectionViewLayout *,collectionViewLayout)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,id<UICollectionViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,id<UICollectionViewDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,UIView *,backgroundView)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,allowsSelection)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,allowsMultipleSelection)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,remembersLastFocusedIndexPath)





//superclass pros UIScrollView
TF_EC_CHAIN_PROP_IMP(UICollectionView ,CGPoint,contentOffset)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,CGSize,contentSize)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,UIEdgeInsets,contentInset)
//TF_EC_CHAIN_PROP_IMP(UICollectionView ,id<UIScrollViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,directionalLockEnabled)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,bounces)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,alwaysBounceVertical)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,alwaysBounceHorizontal)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,pagingEnabled)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,scrollEnabled)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,showsHorizontalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,showsVerticalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,UIEdgeInsets,scrollIndicatorInsets)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,long long,indicatorStyle)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,double,decelerationRate)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,delaysContentTouches)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,canCancelContentTouches)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,double,minimumZoomScale)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,double,maximumZoomScale)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,double,zoomScale)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,bouncesZoom)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,scrollsToTop)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,long long,keyboardDismissMode)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UICollectionView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UICollectionView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UICollectionView);


@end
