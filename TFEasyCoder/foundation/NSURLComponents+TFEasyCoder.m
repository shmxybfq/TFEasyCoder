//
//  NSURLComponents+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLComponents+TFEasyCoder.h"


@implementation NSURLComponents (TFEasyCoder)





-(NSURLComponents  *(^)(NSString *  scheme))set_scheme{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  scheme){
        weakSelf.scheme = scheme;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  user))set_user{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  user){
        weakSelf.user = user;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  password))set_password{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  password){
        weakSelf.password = password;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  host))set_host{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  host){
        weakSelf.host = host;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSNumber *  port))set_port{
    __weak typeof(self) weakSelf = self;
    return ^(NSNumber *  port){
        weakSelf.port = port;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  path))set_path{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  path){
        weakSelf.path = path;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  query))set_query{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  query){
        weakSelf.query = query;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  fragment))set_fragment{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  fragment){
        weakSelf.fragment = fragment;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  percentEncodedUser))set_percentEncodedUser{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  percentEncodedUser){
        weakSelf.percentEncodedUser = percentEncodedUser;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  percentEncodedPassword))set_percentEncodedPassword{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  percentEncodedPassword){
        weakSelf.percentEncodedPassword = percentEncodedPassword;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  percentEncodedHost))set_percentEncodedHost{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  percentEncodedHost){
        weakSelf.percentEncodedHost = percentEncodedHost;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  percentEncodedPath))set_percentEncodedPath{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  percentEncodedPath){
        weakSelf.percentEncodedPath = percentEncodedPath;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  percentEncodedQuery))set_percentEncodedQuery{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  percentEncodedQuery){
        weakSelf.percentEncodedQuery = percentEncodedQuery;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  percentEncodedFragment))set_percentEncodedFragment{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  percentEncodedFragment){
        weakSelf.percentEncodedFragment = percentEncodedFragment;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSArray *  queryItems))set_queryItems{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  queryItems){
        weakSelf.queryItems = queryItems;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSURLComponents  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSURLComponents  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end