//
//  NSUserActivity+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSUserActivity+TFEasyCoder.h"


@implementation NSUserActivity (TFEasyCoder)





-(NSUserActivity  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSDictionary *  userInfo))set_userInfo{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  userInfo){
        weakSelf.userInfo = userInfo;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSSet *  requiredUserInfoKeys))set_requiredUserInfoKeys{
    __weak typeof(self) weakSelf = self;
    return ^(NSSet *  requiredUserInfoKeys){
        weakSelf.requiredUserInfoKeys = requiredUserInfoKeys;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  needsSave))set_needsSave{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  needsSave){
        weakSelf.needsSave = needsSave;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSDate *  expirationDate))set_expirationDate{
    __weak typeof(self) weakSelf = self;
    return ^(NSDate *  expirationDate){
        weakSelf.expirationDate = expirationDate;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSSet *  keywords))set_keywords{
    __weak typeof(self) weakSelf = self;
    return ^(NSSet *  keywords){
        weakSelf.keywords = keywords;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  supportsContinuationStreams))set_supportsContinuationStreams{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  supportsContinuationStreams){
        weakSelf.supportsContinuationStreams = supportsContinuationStreams;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(id<NSUserActivityDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<NSUserActivityDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  eligibleForHandoff))set_eligibleForHandoff{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  eligibleForHandoff){
        weakSelf.eligibleForHandoff = eligibleForHandoff;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  eligibleForSearch))set_eligibleForSearch{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  eligibleForSearch){
        weakSelf.eligibleForSearch = eligibleForSearch;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  eligibleForPublicIndexing))set_eligibleForPublicIndexing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  eligibleForPublicIndexing){
        weakSelf.eligibleForPublicIndexing = eligibleForPublicIndexing;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSUserActivity  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSUserActivity  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end