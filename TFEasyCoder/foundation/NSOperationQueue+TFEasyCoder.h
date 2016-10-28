//
//  NSOperationQueue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSOperationQueue,NSOperationQueue *);

@interface NSOperationQueue (TFEasyCoder)

TF_EC_MSTATIC_INT(NSOperationQueue, NSOperationQueue *);
TF_EC_MINSTANCE_INT(NSOperationQueue,NSOperationQueue *);

TF_EC_CHAIN_PROP_INT(NSOperationQueue ,long long,maxConcurrentOperationCount)
TF_EC_CHAIN_PROP_INT(NSOperationQueue ,BOOL,suspended)
TF_EC_CHAIN_PROP_INT(NSOperationQueue ,NSString *,name)
TF_EC_CHAIN_PROP_INT(NSOperationQueue ,long long,qualityOfService)
TF_EC_CHAIN_PROP_INT(NSOperationQueue ,dispatch_queue_t ,underlyingQueue)


@end