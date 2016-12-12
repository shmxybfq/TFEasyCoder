//
//  UITabBar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITabBar+TFEasyCoder.h"



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UITabBar (TFEasyCoder)





-(UITabBar  *(^)(id<UITabBarDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITabBarDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UITabBar  *(^)(NSArray *  items))set_items{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  items){
        weakSelf.items = items;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UITabBarItem *  selectedItem))set_selectedItem{
    __weak typeof(self) weakSelf = self;
    return ^(UITabBarItem *  selectedItem){
        weakSelf.selectedItem = selectedItem;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIColor *  tintColor))set_tintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  tintColor){
        weakSelf.tintColor = tintColor;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIColor *  barTintColor))set_barTintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  barTintColor){
        weakSelf.barTintColor = barTintColor;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIColor *  selectedImageTintColor))set_selectedImageTintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  selectedImageTintColor){
        weakSelf.selectedImageTintColor = selectedImageTintColor;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIImage *  backgroundImage))set_backgroundImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  backgroundImage){
        weakSelf.backgroundImage = backgroundImage;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIImage *  selectionIndicatorImage))set_selectionIndicatorImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  selectionIndicatorImage){
        weakSelf.selectionIndicatorImage = selectionIndicatorImage;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIImage *  shadowImage))set_shadowImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  shadowImage){
        weakSelf.shadowImage = shadowImage;
        return weakSelf;
    };
}

-(UITabBar  *(^)(long long  itemPositioning))set_itemPositioning{
    __weak typeof(self) weakSelf = self;
    return ^(long long  itemPositioning){
        weakSelf.itemPositioning = itemPositioning;
        return weakSelf;
    };
}

-(UITabBar  *(^)(double  itemWidth))set_itemWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  itemWidth){
        weakSelf.itemWidth = itemWidth;
        return weakSelf;
    };
}

-(UITabBar  *(^)(double  itemSpacing))set_itemSpacing{
    __weak typeof(self) weakSelf = self;
    return ^(double  itemSpacing){
        weakSelf.itemSpacing = itemSpacing;
        return weakSelf;
    };
}

-(UITabBar  *(^)(long long  barStyle))set_barStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  barStyle){
        weakSelf.barStyle = barStyle;
        return weakSelf;
    };
}

-(UITabBar  *(^)(BOOL  translucent))set_translucent{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  translucent){
        weakSelf.translucent = translucent;
        return weakSelf;
    };
}





//superclass pros UIView
-(UITabBar  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UITabBar  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UITabBar  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UITabBar  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UITabBar  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UITabBar  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UITabBar  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UITabBar  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UITabBar  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UITabBar  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UITabBar  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UITabBar  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UITabBar  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UITabBar  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UITabBar  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UITabBar  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UITabBar  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UITabBar  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UITabBar  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UITabBar  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UITabBar  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
