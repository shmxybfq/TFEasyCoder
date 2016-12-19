//
//  UIMutableApplicationShortcutItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMutableApplicationShortcutItem+TFEasyCoder.h"


@implementation UIMutableApplicationShortcutItem (TFEasyCoder)





-(UIMutableApplicationShortcutItem  *(^)(NSString *  type))set_type{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  type){
        weakSelf.type = type;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSString *  localizedTitle))set_localizedTitle{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  localizedTitle){
        weakSelf.localizedTitle = localizedTitle;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSString *  localizedSubtitle))set_localizedSubtitle{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  localizedSubtitle){
        weakSelf.localizedSubtitle = localizedSubtitle;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(UIApplicationShortcutIcon *  icon))set_icon{
    __weak typeof(self) weakSelf = self;
    return ^(UIApplicationShortcutIcon *  icon){
        weakSelf.icon = icon;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSDictionary *  userInfo))set_userInfo{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  userInfo){
        weakSelf.userInfo = userInfo;
        return weakSelf;
    };
}






//superclass pros UIApplicationShortcutItem
//superclass pros NSObject
-(UIMutableApplicationShortcutItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIMutableApplicationShortcutItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end