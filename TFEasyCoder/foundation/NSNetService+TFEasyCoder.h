//
//  NSNetService+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNetService,NSNetService *);

@interface NSNetService (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNetService, NSNetService *);
TF_EC_MINSTANCE_INT(NSNetService,NSNetService *);


TF_EC_CHAIN_PROP_INT(NSNetService ,id<NSNetServiceDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSNetService ,BOOL,includesPeerToPeer);

@end