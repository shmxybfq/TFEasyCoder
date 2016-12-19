//
//  NSPersonNameComponents+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPersonNameComponents+TFEasyCoder.h"


@implementation NSPersonNameComponents (TFEasyCoder)





-(NSPersonNameComponents  *(^)(NSString *  namePrefix))set_namePrefix{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  namePrefix){
        weakSelf.namePrefix = namePrefix;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  givenName))set_givenName{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  givenName){
        weakSelf.givenName = givenName;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  middleName))set_middleName{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  middleName){
        weakSelf.middleName = middleName;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  familyName))set_familyName{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  familyName){
        weakSelf.familyName = familyName;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  nameSuffix))set_nameSuffix{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  nameSuffix){
        weakSelf.nameSuffix = nameSuffix;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  nickname))set_nickname{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  nickname){
        weakSelf.nickname = nickname;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSPersonNameComponents *  phoneticRepresentation))set_phoneticRepresentation{
    __weak typeof(self) weakSelf = self;
    return ^(NSPersonNameComponents *  phoneticRepresentation){
        weakSelf.phoneticRepresentation = phoneticRepresentation;
        return weakSelf;
    };
}





//superclass pros NSObject
-(NSPersonNameComponents  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(NSPersonNameComponents  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end