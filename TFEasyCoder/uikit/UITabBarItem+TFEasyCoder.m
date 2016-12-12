//
//  UITabBarItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITabBarItem+TFEasyCoder.h"


@implementation UITabBarItem (TFEasyCoder)






-(UITabBarItem  *(^)(UIImage *  selectedImage))set_selectedImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  selectedImage){
        weakSelf.selectedImage = selectedImage;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(NSString *  badgeValue))set_badgeValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  badgeValue){
        weakSelf.badgeValue = badgeValue;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(UIOffset  titlePositionAdjustment))set_titlePositionAdjustment{
    __weak typeof(self) weakSelf = self;
    return ^(UIOffset  titlePositionAdjustment){
        weakSelf.titlePositionAdjustment = titlePositionAdjustment;
        return weakSelf;
    };
}





//superclass pros UIBarItem
-(UITabBarItem  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(UIImage *  image))set_image{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  image){
        weakSelf.image = image;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(UIImage *  landscapeImagePhone))set_landscapeImagePhone{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  landscapeImagePhone){
        weakSelf.landscapeImagePhone = landscapeImagePhone;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(UIEdgeInsets  imageInsets))set_imageInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  imageInsets){
        weakSelf.imageInsets = imageInsets;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(UIEdgeInsets  landscapeImagePhoneInsets))set_landscapeImagePhoneInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  landscapeImagePhoneInsets){
        weakSelf.landscapeImagePhoneInsets = landscapeImagePhoneInsets;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UITabBarItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UITabBarItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end