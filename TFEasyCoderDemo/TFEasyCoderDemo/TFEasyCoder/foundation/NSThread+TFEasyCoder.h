//
//  NSThread+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSThread,NSThread *);

@interface NSThread (TFEasyCoder)

TF_EC_MSTATIC_INT(NSThread, NSThread *);
TF_EC_MINSTANCE_INT(NSThread,NSThread *);


TF_EC_CHAIN_PROP_INT(NSThread ,double,threadPriority);
TF_EC_CHAIN_PROP_INT(NSThread ,long long,qualityOfService);
TF_EC_CHAIN_PROP_INT(NSThread ,NSString *,name);
TF_EC_CHAIN_PROP_INT(NSThread ,unsigned long long,stackSize);

@end