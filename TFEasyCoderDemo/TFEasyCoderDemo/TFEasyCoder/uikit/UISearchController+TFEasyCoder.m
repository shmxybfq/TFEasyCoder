//
//  UISearchController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISearchController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISearchController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISearchController, UISearchController *);
TF_EC_MINSTANCE_IMP(UISearchController, UISearchController *);


TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(UISearchController ,id<UISearchControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,dimsBackgroundDuringPresentation)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,obscuresBackgroundDuringPresentation)
TF_EC_CHAIN_PROP_IMP(UISearchController ,BOOL,hidesNavigationBarDuringPresentation)

@end