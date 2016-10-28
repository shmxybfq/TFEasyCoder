//
//  NSProcessInfo+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSProcessInfo,NSProcessInfo *);

@interface NSProcessInfo (TFEasyCoder)

TF_EC_MSTATIC_INT(NSProcessInfo, NSProcessInfo *);
TF_EC_MINSTANCE_INT(NSProcessInfo,NSProcessInfo *);


TF_EC_CHAIN_PROP_INT(NSProcessInfo ,NSString *,processName);


@end