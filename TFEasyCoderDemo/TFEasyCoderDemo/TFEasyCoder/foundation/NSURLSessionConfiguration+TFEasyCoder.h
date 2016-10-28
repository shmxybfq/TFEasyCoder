//
//  NSURLSessionConfiguration+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSessionConfiguration,NSURLSessionConfiguration *);

@interface NSURLSessionConfiguration (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSessionConfiguration, NSURLSessionConfiguration *);
TF_EC_MINSTANCE_INT(NSURLSessionConfiguration,NSURLSessionConfiguration *);



TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,unsigned long long,requestCachePolicy)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,double,timeoutIntervalForRequest)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,double,timeoutIntervalForResource)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,unsigned long long,networkServiceType)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,allowsCellularAccess)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,discretionary)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSString *,sharedContainerIdentifier)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,sessionSendsLaunchEvents)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSDictionary *,connectionProxyDictionary)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,int,TLSMinimumSupportedProtocol)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,int,TLSMaximumSupportedProtocol)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,HTTPShouldUsePipelining)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,HTTPShouldSetCookies)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,unsigned long long,HTTPCookieAcceptPolicy)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSDictionary *,HTTPAdditionalHeaders)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,long long,HTTPMaximumConnectionsPerHost)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSHTTPCookieStorage *,HTTPCookieStorage)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,shouldUseExtendedBackgroundIdleMode)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSArray *,protocolClasses)


@end