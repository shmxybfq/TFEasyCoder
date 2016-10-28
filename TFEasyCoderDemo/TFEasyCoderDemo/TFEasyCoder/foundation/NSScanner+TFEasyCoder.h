//
//  NSScanner+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSScanner,NSScanner *);

@interface NSScanner (TFEasyCoder)

TF_EC_MSTATIC_INT(NSScanner, NSScanner *);
TF_EC_MINSTANCE_INT(NSScanner,NSScanner *);


TF_EC_CHAIN_PROP_INT(NSScanner ,unsigned long long,scanLocation);
TF_EC_CHAIN_PROP_INT(NSScanner ,NSCharacterSet *,charactersToBeSkipped);
TF_EC_CHAIN_PROP_INT(NSScanner ,BOOL,caseSensitive);

@end