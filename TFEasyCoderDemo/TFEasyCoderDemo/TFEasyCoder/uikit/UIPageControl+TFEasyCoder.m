//
//  UIPageControl+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPageControl+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPageControl (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPageControl, UIPageControl *);
TF_EC_MINSTANCE_IMP(UIPageControl, UIPageControl *);


TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,numberOfPages)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,currentPage)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,hidesForSinglePage)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,defersCurrentPageDisplay)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,UIColor *,pageIndicatorTintColor)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,UIColor *,currentPageIndicatorTintColor)


@end