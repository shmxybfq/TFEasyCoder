//
//  UIPageControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPageControl,UIPageControl *);

@interface UIPageControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPageControl, UIPageControl *);
TF_EC_MINSTANCE_INT(UIPageControl,UIPageControl *);


TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,numberOfPages);
TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,currentPage);
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,hidesForSinglePage);
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,defersCurrentPageDisplay);
TF_EC_CHAIN_PROP_INT(UIPageControl ,UIColor *,pageIndicatorTintColor);
TF_EC_CHAIN_PROP_INT(UIPageControl ,UIColor *,currentPageIndicatorTintColor);


@end