//
//  NSURLSessionConfiguration+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLSessionConfiguration (TFEasyCoder)






-(NSURLSessionConfiguration  *(^)(unsigned long long  requestCachePolicy))set_requestCachePolicy;
-(NSURLSessionConfiguration  *(^)(double  timeoutIntervalForRequest))set_timeoutIntervalForRequest;
-(NSURLSessionConfiguration  *(^)(double  timeoutIntervalForResource))set_timeoutIntervalForResource;
-(NSURLSessionConfiguration  *(^)(unsigned long long  networkServiceType))set_networkServiceType;
-(NSURLSessionConfiguration  *(^)(BOOL  allowsCellularAccess))set_allowsCellularAccess;
-(NSURLSessionConfiguration  *(^)(BOOL  discretionary))set_discretionary;
-(NSURLSessionConfiguration  *(^)(NSString *  sharedContainerIdentifier))set_sharedContainerIdentifier;
-(NSURLSessionConfiguration  *(^)(BOOL  sessionSendsLaunchEvents))set_sessionSendsLaunchEvents;
-(NSURLSessionConfiguration  *(^)(NSDictionary *  connectionProxyDictionary))set_connectionProxyDictionary;
-(NSURLSessionConfiguration  *(^)(int  TLSMinimumSupportedProtocol))set_TLSMinimumSupportedProtocol;
-(NSURLSessionConfiguration  *(^)(int  TLSMaximumSupportedProtocol))set_TLSMaximumSupportedProtocol;
-(NSURLSessionConfiguration  *(^)(BOOL  HTTPShouldUsePipelining))set_HTTPShouldUsePipelining;
-(NSURLSessionConfiguration  *(^)(BOOL  HTTPShouldSetCookies))set_HTTPShouldSetCookies;
-(NSURLSessionConfiguration  *(^)(unsigned long long  HTTPCookieAcceptPolicy))set_HTTPCookieAcceptPolicy;
-(NSURLSessionConfiguration  *(^)(NSDictionary *  HTTPAdditionalHeaders))set_HTTPAdditionalHeaders;
-(NSURLSessionConfiguration  *(^)(long long  HTTPMaximumConnectionsPerHost))set_HTTPMaximumConnectionsPerHost;
-(NSURLSessionConfiguration  *(^)(NSHTTPCookieStorage *  HTTPCookieStorage))set_HTTPCookieStorage;
-(NSURLSessionConfiguration  *(^)(BOOL  shouldUseExtendedBackgroundIdleMode))set_shouldUseExtendedBackgroundIdleMode;
-(NSURLSessionConfiguration  *(^)(NSArray *  protocolClasses))set_protocolClasses;





//superclass pros NSObject
-(NSURLSessionConfiguration  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLSessionConfiguration  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLSessionConfiguration  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLSessionConfiguration  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLSessionConfiguration  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLSessionConfiguration  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLSessionConfiguration  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLSessionConfiguration  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLSessionConfiguration  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLSessionConfiguration  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end