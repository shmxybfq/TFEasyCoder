//
//  NSURLSessionConfiguration+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionConfiguration+TFEasyCoder.h"


@implementation NSURLSessionConfiguration (TFEasyCoder)





-(NSURLSessionConfiguration  *(^)(unsigned long long  requestCachePolicy))set_requestCachePolicy{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  requestCachePolicy){
        weakSelf.requestCachePolicy = requestCachePolicy;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(double  timeoutIntervalForRequest))set_timeoutIntervalForRequest{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeoutIntervalForRequest){
        weakSelf.timeoutIntervalForRequest = timeoutIntervalForRequest;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(double  timeoutIntervalForResource))set_timeoutIntervalForResource{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeoutIntervalForResource){
        weakSelf.timeoutIntervalForResource = timeoutIntervalForResource;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(unsigned long long  networkServiceType))set_networkServiceType{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  networkServiceType){
        weakSelf.networkServiceType = networkServiceType;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  allowsCellularAccess))set_allowsCellularAccess{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsCellularAccess){
        weakSelf.allowsCellularAccess = allowsCellularAccess;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  discretionary))set_discretionary{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  discretionary){
        weakSelf.discretionary = discretionary;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSString *  sharedContainerIdentifier))set_sharedContainerIdentifier{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  sharedContainerIdentifier){
        weakSelf.sharedContainerIdentifier = sharedContainerIdentifier;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  sessionSendsLaunchEvents))set_sessionSendsLaunchEvents{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  sessionSendsLaunchEvents){
        weakSelf.sessionSendsLaunchEvents = sessionSendsLaunchEvents;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSDictionary *  connectionProxyDictionary))set_connectionProxyDictionary{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  connectionProxyDictionary){
        weakSelf.connectionProxyDictionary = connectionProxyDictionary;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(int  TLSMinimumSupportedProtocol))set_TLSMinimumSupportedProtocol{
    __weak typeof(self) weakSelf = self;
    return ^(int  TLSMinimumSupportedProtocol){
        weakSelf.TLSMinimumSupportedProtocol = TLSMinimumSupportedProtocol;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(int  TLSMaximumSupportedProtocol))set_TLSMaximumSupportedProtocol{
    __weak typeof(self) weakSelf = self;
    return ^(int  TLSMaximumSupportedProtocol){
        weakSelf.TLSMaximumSupportedProtocol = TLSMaximumSupportedProtocol;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  HTTPShouldUsePipelining))set_HTTPShouldUsePipelining{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  HTTPShouldUsePipelining){
        weakSelf.HTTPShouldUsePipelining = HTTPShouldUsePipelining;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  HTTPShouldSetCookies))set_HTTPShouldSetCookies{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  HTTPShouldSetCookies){
        weakSelf.HTTPShouldSetCookies = HTTPShouldSetCookies;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(unsigned long long  HTTPCookieAcceptPolicy))set_HTTPCookieAcceptPolicy{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  HTTPCookieAcceptPolicy){
        weakSelf.HTTPCookieAcceptPolicy = HTTPCookieAcceptPolicy;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSDictionary *  HTTPAdditionalHeaders))set_HTTPAdditionalHeaders{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  HTTPAdditionalHeaders){
        weakSelf.HTTPAdditionalHeaders = HTTPAdditionalHeaders;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(long long  HTTPMaximumConnectionsPerHost))set_HTTPMaximumConnectionsPerHost{
    __weak typeof(self) weakSelf = self;
    return ^(long long  HTTPMaximumConnectionsPerHost){
        weakSelf.HTTPMaximumConnectionsPerHost = HTTPMaximumConnectionsPerHost;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSHTTPCookieStorage *  HTTPCookieStorage))set_HTTPCookieStorage{
    __weak typeof(self) weakSelf = self;
    return ^(NSHTTPCookieStorage *  HTTPCookieStorage){
        weakSelf.HTTPCookieStorage = HTTPCookieStorage;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  shouldUseExtendedBackgroundIdleMode))set_shouldUseExtendedBackgroundIdleMode{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldUseExtendedBackgroundIdleMode){
        weakSelf.shouldUseExtendedBackgroundIdleMode = shouldUseExtendedBackgroundIdleMode;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSArray *  protocolClasses))set_protocolClasses{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  protocolClasses){
        weakSelf.protocolClasses = protocolClasses;
        return weakSelf;
    };
}






//superclass pros NSObject
-(NSURLSessionConfiguration  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSURLSessionConfiguration  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end