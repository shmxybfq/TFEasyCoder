//
//  NSMetadataQuery+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMetadataQuery+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMetadataQuery (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMetadataQuery, NSMetadataQuery *);
TF_EC_MINSTANCE_IMP(NSMetadataQuery, NSMetadataQuery *);


TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,id<NSMetadataQueryDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSPredicate *,predicate)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSArray *,sortDescriptors)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSArray *,valueListAttributes)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSArray *,groupingAttributes)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,double,notificationBatchingInterval)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSArray *,searchScopes)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSArray *,searchItems)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSOperationQueue *,operationQueue)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMetadataQuery ,long long,accessibilityNavigationStyle)





@end