//
//  UIScrollView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIScrollView,UIScrollView *);

@interface UIScrollView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIScrollView, UIScrollView *);
TF_EC_MINSTANCE_INT(UIScrollView,UIScrollView *);


TF_EC_CHAIN_PROP_INT(UIScrollView ,CGPoint,contentOffset);
TF_EC_CHAIN_PROP_INT(UIScrollView ,CGSize,contentSize);
TF_EC_CHAIN_PROP_INT(UIScrollView ,UIEdgeInsets,contentInset);
TF_EC_CHAIN_PROP_INT(UIScrollView ,id<UIScrollViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,directionalLockEnabled);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,bounces);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,alwaysBounceVertical);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,alwaysBounceHorizontal);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,pagingEnabled);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,scrollEnabled);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,showsHorizontalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,showsVerticalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UIScrollView ,UIEdgeInsets,scrollIndicatorInsets);
TF_EC_CHAIN_PROP_INT(UIScrollView ,long long,indicatorStyle);
TF_EC_CHAIN_PROP_INT(UIScrollView ,double,decelerationRate);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,delaysContentTouches);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,canCancelContentTouches);
TF_EC_CHAIN_PROP_INT(UIScrollView ,double,minimumZoomScale);
TF_EC_CHAIN_PROP_INT(UIScrollView ,double,maximumZoomScale);
TF_EC_CHAIN_PROP_INT(UIScrollView ,double,zoomScale);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,bouncesZoom);
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,scrollsToTop);
TF_EC_CHAIN_PROP_INT(UIScrollView ,long long,keyboardDismissMode);


@end