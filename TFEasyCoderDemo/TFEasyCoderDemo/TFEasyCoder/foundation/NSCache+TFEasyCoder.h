//
//  NSCache+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCache,NSCache *);

@interface NSCache (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCache, NSCache *);
TF_EC_MINSTANCE_INT(NSCache,NSCache *);


TF_EC_CHAIN_PROP_INT(NSCache ,NSString *,name);
TF_EC_CHAIN_PROP_INT(NSCache ,id<NSCacheDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSCache ,unsigned long long,totalCostLimit);
TF_EC_CHAIN_PROP_INT(NSCache ,unsigned long long,countLimit);
TF_EC_CHAIN_PROP_INT(NSCache ,BOOL,evictsObjectsWithDiscardedContent);

@end