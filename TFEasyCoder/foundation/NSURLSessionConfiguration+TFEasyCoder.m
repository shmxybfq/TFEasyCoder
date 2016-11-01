//
//  NSURLSessionConfiguration+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionConfiguration+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionConfiguration (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionConfiguration, NSURLSessionConfiguration *);
TF_EC_MINSTANCE_IMP(NSURLSessionConfiguration, NSURLSessionConfiguration *);


TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,unsigned long long,requestCachePolicy)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,double,timeoutIntervalForRequest)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,double,timeoutIntervalForResource)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,unsigned long long,networkServiceType)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,allowsCellularAccess)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,discretionary)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSString *,sharedContainerIdentifier)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,sessionSendsLaunchEvents)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSDictionary *,connectionProxyDictionary)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,int,TLSMinimumSupportedProtocol)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,int,TLSMaximumSupportedProtocol)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,HTTPShouldUsePipelining)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,HTTPShouldSetCookies)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,unsigned long long,HTTPCookieAcceptPolicy)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSDictionary *,HTTPAdditionalHeaders)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,long long,HTTPMaximumConnectionsPerHost)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSHTTPCookieStorage *,HTTPCookieStorage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,shouldUseExtendedBackgroundIdleMode)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSArray *,protocolClasses)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLSessionConfiguration ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLSessionConfiguration);


@end