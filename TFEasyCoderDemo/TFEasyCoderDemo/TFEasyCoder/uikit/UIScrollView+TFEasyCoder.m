//
//  UIScrollView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIScrollView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIScrollView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIScrollView, UIScrollView *);
TF_EC_MINSTANCE_IMP(UIScrollView, UIScrollView *);


TF_EC_CHAIN_PROP_IMP(UIScrollView ,CGPoint,contentOffset)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,CGSize,contentSize)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,UIEdgeInsets,contentInset)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,id<UIScrollViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,directionalLockEnabled)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,bounces)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,alwaysBounceVertical)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,alwaysBounceHorizontal)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,pagingEnabled)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,scrollEnabled)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,showsHorizontalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,showsVerticalScrollIndicator)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,UIEdgeInsets,scrollIndicatorInsets)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,long long,indicatorStyle)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,double,decelerationRate)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,delaysContentTouches)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,canCancelContentTouches)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,double,minimumZoomScale)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,double,maximumZoomScale)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,double,zoomScale)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,bouncesZoom)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,BOOL,scrollsToTop)
TF_EC_CHAIN_PROP_IMP(UIScrollView ,long long,keyboardDismissMode)


@end