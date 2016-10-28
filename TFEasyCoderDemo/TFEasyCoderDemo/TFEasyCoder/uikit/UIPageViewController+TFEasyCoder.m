//
//  UIPageViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPageViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPageViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPageViewController, UIPageViewController *);
TF_EC_MINSTANCE_IMP(UIPageViewController, UIPageViewController *);


TF_EC_CHAIN_PROP_IMP(UIPageViewController ,id<UIPageViewControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,id<UIPageViewControllerDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UIPageViewController ,BOOL,doubleSided)

@end