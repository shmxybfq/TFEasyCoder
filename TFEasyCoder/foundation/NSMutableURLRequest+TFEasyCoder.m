//
//  NSMutableURLRequest+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableURLRequest+TFEasyCoder.h"


@implementation NSMutableURLRequest (TFEasyCoder)





-(NSMutableURLRequest  *(^)(NSString *  HTTPMethod))set_HTTPMethod{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  HTTPMethod){
        weakSelf.HTTPMethod = HTTPMethod;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSDictionary *  allHTTPHeaderFields))set_allHTTPHeaderFields{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  allHTTPHeaderFields){
        weakSelf.allHTTPHeaderFields = allHTTPHeaderFields;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSData *  HTTPBody))set_HTTPBody{
    __weak typeof(self) weakSelf = self;
    return ^(NSData *  HTTPBody){
        weakSelf.HTTPBody = HTTPBody;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSInputStream *  HTTPBodyStream))set_HTTPBodyStream{
    __weak typeof(self) weakSelf = self;
    return ^(NSInputStream *  HTTPBodyStream){
        weakSelf.HTTPBodyStream = HTTPBodyStream;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(BOOL  HTTPShouldHandleCookies))set_HTTPShouldHandleCookies{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  HTTPShouldHandleCookies){
        weakSelf.HTTPShouldHandleCookies = HTTPShouldHandleCookies;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(BOOL  HTTPShouldUsePipelining))set_HTTPShouldUsePipelining{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  HTTPShouldUsePipelining){
        weakSelf.HTTPShouldUsePipelining = HTTPShouldUsePipelining;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(unsigned long long  cachePolicy))set_cachePolicy{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  cachePolicy){
        weakSelf.cachePolicy = cachePolicy;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(double  timeoutInterval))set_timeoutInterval{
    __weak typeof(self) weakSelf = self;
    return ^(double  timeoutInterval){
        weakSelf.timeoutInterval = timeoutInterval;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(unsigned long long  networkServiceType))set_networkServiceType{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  networkServiceType){
        weakSelf.networkServiceType = networkServiceType;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(BOOL  allowsCellularAccess))set_allowsCellularAccess{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsCellularAccess){
        weakSelf.allowsCellularAccess = allowsCellularAccess;
        return weakSelf;
    };
}





//superclass pros NSURLRequest
//superclass pros NSObject
-(NSMutableURLRequest  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSMutableURLRequest  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end