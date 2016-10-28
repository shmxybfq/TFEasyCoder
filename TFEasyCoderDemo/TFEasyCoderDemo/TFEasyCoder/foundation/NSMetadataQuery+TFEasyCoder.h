//
//  NSMetadataQuery+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMetadataQuery,NSMetadataQuery *);

@interface NSMetadataQuery (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMetadataQuery, NSMetadataQuery *);
TF_EC_MINSTANCE_INT(NSMetadataQuery,NSMetadataQuery *);


TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,id<NSMetadataQueryDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSPredicate *,predicate);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSArray *,sortDescriptors);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSArray *,valueListAttributes);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSArray *,groupingAttributes);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,double,notificationBatchingInterval);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSArray *,searchScopes);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSArray *,searchItems);
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSOperationQueue *,operationQueue);

@end