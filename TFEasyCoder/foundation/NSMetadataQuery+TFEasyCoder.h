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




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMetadataQuery ,long long,accessibilityNavigationStyle)





@end