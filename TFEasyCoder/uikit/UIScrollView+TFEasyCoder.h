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





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIScrollView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIScrollView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIScrollView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIScrollView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIScrollView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIScrollView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIScrollView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIScrollView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIScrollView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIScrollView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIScrollView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIScrollView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIScrollView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIScrollView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIScrollView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIScrollView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIScrollView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIScrollView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIScrollView);


@end
