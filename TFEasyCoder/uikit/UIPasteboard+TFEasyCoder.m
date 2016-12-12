//
//  UIPasteboard+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPasteboard+TFEasyCoder.h"


@implementation UIPasteboard (TFEasyCoder)





-(UIPasteboard  *(^)(NSString *  string))set_string{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  string){
        weakSelf.string = string;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSArray *  strings))set_strings{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  strings){
        weakSelf.strings = strings;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSArray *  URLs))set_URLs{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  URLs){
        weakSelf.URLs = URLs;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(UIImage *  image))set_image{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  image){
        weakSelf.image = image;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSArray *  images))set_images{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  images){
        weakSelf.images = images;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(UIColor *  color))set_color{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  color){
        weakSelf.color = color;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSArray *  colors))set_colors{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  colors){
        weakSelf.colors = colors;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(BOOL  persistent))set_persistent{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  persistent){
        weakSelf.persistent = persistent;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSArray *  items))set_items{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  items){
        weakSelf.items = items;
        return weakSelf;
    };
}





//superclass pros NSObject
-(UIPasteboard  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIPasteboard  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end