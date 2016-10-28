//
//  NSCondition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCondition,NSCondition *);

@interface NSCondition (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCondition, NSCondition *);
TF_EC_MINSTANCE_INT(NSCondition,NSCondition *);


TF_EC_CHAIN_PROP_INT(NSCondition ,NSString *,name);

@end