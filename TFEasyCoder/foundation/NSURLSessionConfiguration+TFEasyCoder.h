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





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLSessionConfiguration ,long long,accessibilityNavigationStyle)





@end