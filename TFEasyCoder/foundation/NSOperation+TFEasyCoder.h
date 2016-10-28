//
//  NSOperation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSOperation,NSOperation *);

@interface NSOperation (TFEasyCoder)

TF_EC_MSTATIC_INT(NSOperation, NSOperation *);
TF_EC_MINSTANCE_INT(NSOperation,NSOperation *);


TF_EC_CHAIN_PROP_INT(NSOperation ,long long,queuePriority);
TF_EC_CHAIN_PROP_INT(NSOperation ,double,threadPriority);
TF_EC_CHAIN_PROP_INT(NSOperation ,long long,qualityOfService);
TF_EC_CHAIN_PROP_INT(NSOperation ,NSString *,name);

@end