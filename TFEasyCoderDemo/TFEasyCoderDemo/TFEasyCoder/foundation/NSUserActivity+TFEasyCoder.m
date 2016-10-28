//
//  NSUserActivity+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSUserActivity+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSUserActivity (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSUserActivity, NSUserActivity *);
TF_EC_MINSTANCE_IMP(NSUserActivity, NSUserActivity *);


TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSDictionary *,userInfo)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSSet *,requiredUserInfoKeys)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,needsSave)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSDate *,expirationDate)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,NSSet *,keywords)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,supportsContinuationStreams)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,id<NSUserActivityDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,eligibleForHandoff)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,eligibleForSearch)
TF_EC_CHAIN_PROP_IMP(NSUserActivity ,BOOL,eligibleForPublicIndexing)

@end