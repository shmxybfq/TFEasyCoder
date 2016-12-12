//
//  NSXMLParser+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSXMLParser+TFEasyCoder.h"


@implementation NSXMLParser (TFEasyCoder)





-(NSXMLParser  *(^)(id<NSXMLParserDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<NSXMLParserDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(BOOL  shouldProcessNamespaces))set_shouldProcessNamespaces{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldProcessNamespaces){
        weakSelf.shouldProcessNamespaces = shouldProcessNamespaces;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(BOOL  shouldReportNamespacePrefixes))set_shouldReportNamespacePrefixes{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldReportNamespacePrefixes){
        weakSelf.shouldReportNamespacePrefixes = shouldReportNamespacePrefixes;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(unsigned long long  externalEntityResolvingPolicy))set_externalEntityResolvingPolicy{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  externalEntityResolvingPolicy){
        weakSelf.externalEntityResolvingPolicy = externalEntityResolvingPolicy;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(NSSet *  allowedExternalEntityURLs))set_allowedExternalEntityURLs{
    __weak typeof(self) weakSelf = self;
    return ^(NSSet *  allowedExternalEntityURLs){
        weakSelf.allowedExternalEntityURLs = allowedExternalEntityURLs;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(BOOL  shouldResolveExternalEntities))set_shouldResolveExternalEntities{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldResolveExternalEntities){
        weakSelf.shouldResolveExternalEntities = shouldResolveExternalEntities;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSXMLParser  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSXMLParser  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end