//
//  UIBarButtonItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBarButtonItem+TFEasyCoder.h"


@implementation UIBarButtonItem (TFEasyCoder)





-(UIBarButtonItem  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(UIEdgeInsets  imageInsets))set_imageInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  imageInsets){
        weakSelf.imageInsets = imageInsets;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(long long  style))set_style{
    __weak typeof(self) weakSelf = self;
    return ^(long long  style){
        weakSelf.style = style;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(double  width))set_width{
    __weak typeof(self) weakSelf = self;
    return ^(double  width){
        weakSelf.width = width;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(NSSet *  possibleTitles))set_possibleTitles{
    __weak typeof(self) weakSelf = self;
    return ^(NSSet *  possibleTitles){
        weakSelf.possibleTitles = possibleTitles;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(UIView *  customView))set_customView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  customView){
        weakSelf.customView = customView;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(SEL  action))set_action{
    __weak typeof(self) weakSelf = self;
    return ^(SEL  action){
        weakSelf.action = action;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(UIColor *  tintColor))set_tintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  tintColor){
        weakSelf.tintColor = tintColor;
        return weakSelf;
    };
}







//superclass pros UIBarItem
//TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,BOOL,enabled)
-(UIBarButtonItem  *(^)(NSString *  title))set_title{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  title){
        weakSelf.title = title;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(UIImage *  image))set_image{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  image){
        weakSelf.image = image;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(UIImage *  landscapeImagePhone))set_landscapeImagePhone{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  landscapeImagePhone){
        weakSelf.landscapeImagePhone = landscapeImagePhone;
        return weakSelf;
    };
}

//TF_EC_CHAIN_PROP_IMP(UIBarButtonItem ,UIEdgeInsets,imageInsets)
-(UIBarButtonItem  *(^)(UIEdgeInsets  landscapeImagePhoneInsets))set_landscapeImagePhoneInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  landscapeImagePhoneInsets){
        weakSelf.landscapeImagePhoneInsets = landscapeImagePhoneInsets;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIBarButtonItem  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIBarButtonItem  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end