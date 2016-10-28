//
//  NSNetServiceBrowser+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNetServiceBrowser+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNetServiceBrowser (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNetServiceBrowser, NSNetServiceBrowser *);
TF_EC_MINSTANCE_IMP(NSNetServiceBrowser, NSNetServiceBrowser *);


TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,id<NSNetServiceBrowserDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSNetServiceBrowser ,BOOL,includesPeerToPeer)

@end