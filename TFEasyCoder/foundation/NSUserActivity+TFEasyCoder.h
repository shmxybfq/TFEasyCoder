//
//  NSUserActivity+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSUserActivity,NSUserActivity *);

@interface NSUserActivity (TFEasyCoder)

TF_EC_MSTATIC_INT(NSUserActivity, NSUserActivity *);
TF_EC_MINSTANCE_INT(NSUserActivity,NSUserActivity *);


TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSString *,title);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSDictionary *,userInfo);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSSet *,requiredUserInfoKeys);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,needsSave);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSDate *,expirationDate);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSSet *,keywords);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,supportsContinuationStreams);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,id<NSUserActivityDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,eligibleForHandoff);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,eligibleForSearch);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,eligibleForPublicIndexing);

@end