//
//  NSNetServiceBrowser+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNetServiceBrowser,NSNetServiceBrowser *);

@interface NSNetServiceBrowser (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNetServiceBrowser, NSNetServiceBrowser *);
TF_EC_MINSTANCE_INT(NSNetServiceBrowser,NSNetServiceBrowser *);


TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,id<NSNetServiceBrowserDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSNetServiceBrowser ,BOOL,includesPeerToPeer);

@end