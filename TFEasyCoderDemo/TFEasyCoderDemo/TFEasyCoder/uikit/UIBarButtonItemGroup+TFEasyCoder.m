//
//  UIBarButtonItemGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBarButtonItemGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBarButtonItemGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBarButtonItemGroup, UIBarButtonItemGroup *);
TF_EC_MINSTANCE_IMP(UIBarButtonItemGroup, UIBarButtonItemGroup *);


TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,NSArray *,barButtonItems)
TF_EC_CHAIN_PROP_IMP(UIBarButtonItemGroup ,UIBarButtonItem *,representativeItem)


@end