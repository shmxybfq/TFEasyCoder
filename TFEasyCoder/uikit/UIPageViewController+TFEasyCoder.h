//
//  UIPageViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPageViewController,UIPageViewController *);

@interface UIPageViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPageViewController, UIPageViewController *);
TF_EC_MINSTANCE_INT(UIPageViewController,UIPageViewController *);


TF_EC_CHAIN_PROP_INT(UIPageViewController ,id<UIPageViewControllerDelegate>,delegate);
TF_EC_CHAIN_PROP_INT(UIPageViewController ,id<UIPageViewControllerDataSource>,dataSource);
TF_EC_CHAIN_PROP_INT(UIPageViewController ,BOOL,doubleSided);

@end