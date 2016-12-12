//
//  NSMetadataQuery+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMetadataQuery+TFEasyCoder.h"


@implementation NSMetadataQuery (TFEasyCoder)





-(NSMetadataQuery  *(^)(id<NSMetadataQueryDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<NSMetadataQueryDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSPredicate *  predicate))set_predicate{
    __weak typeof(self) weakSelf = self;
    return ^(NSPredicate *  predicate){
        weakSelf.predicate = predicate;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSArray *  sortDescriptors))set_sortDescriptors{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  sortDescriptors){
        weakSelf.sortDescriptors = sortDescriptors;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSArray *  valueListAttributes))set_valueListAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  valueListAttributes){
        weakSelf.valueListAttributes = valueListAttributes;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSArray *  groupingAttributes))set_groupingAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  groupingAttributes){
        weakSelf.groupingAttributes = groupingAttributes;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(double  notificationBatchingInterval))set_notificationBatchingInterval{
    __weak typeof(self) weakSelf = self;
    return ^(double  notificationBatchingInterval){
        weakSelf.notificationBatchingInterval = notificationBatchingInterval;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSArray *  searchScopes))set_searchScopes{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  searchScopes){
        weakSelf.searchScopes = searchScopes;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSArray *  searchItems))set_searchItems{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  searchItems){
        weakSelf.searchItems = searchItems;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSOperationQueue *  operationQueue))set_operationQueue{
    __weak typeof(self) weakSelf = self;
    return ^(NSOperationQueue *  operationQueue){
        weakSelf.operationQueue = operationQueue;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSMetadataQuery  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSMetadataQuery  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end