//
//  UISwitch+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISwitch+TFEasyCoder.h"


@implementation UISwitch (TFEasyCoder)





-(UISwitch  *(^)(UIColor *  onTintColor))set_onTintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  onTintColor){
        weakSelf.onTintColor = onTintColor;
        return weakSelf;
    };
}

-(UISwitch  *(^)(UIColor *  tintColor))set_tintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  tintColor){
        weakSelf.tintColor = tintColor;
        return weakSelf;
    };
}

-(UISwitch  *(^)(UIColor *  thumbTintColor))set_thumbTintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  thumbTintColor){
        weakSelf.thumbTintColor = thumbTintColor;
        return weakSelf;
    };
}

-(UISwitch  *(^)(UIImage *  onImage))set_onImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  onImage){
        weakSelf.onImage = onImage;
        return weakSelf;
    };
}

-(UISwitch  *(^)(UIImage *  offImage))set_offImage{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  offImage){
        weakSelf.offImage = offImage;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  on))set_on{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  on){
        weakSelf.on = on;
        return weakSelf;
    };
}






//superclass pros UIControl
-(UISwitch  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  selected))set_selected{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  selected){
        weakSelf.selected = selected;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  highlighted))set_highlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  highlighted){
        weakSelf.highlighted = highlighted;
        return weakSelf;
    };
}

-(UISwitch  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentVerticalAlignment){
        weakSelf.contentVerticalAlignment = contentVerticalAlignment;
        return weakSelf;
    };
}

-(UISwitch  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentHorizontalAlignment){
        weakSelf.contentHorizontalAlignment = contentHorizontalAlignment;
        return weakSelf;
    };
}

//superclass pros UIView
-(UISwitch  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UISwitch  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UISwitch  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UISwitch  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UISwitch  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UISwitch  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UISwitch  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UISwitch  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UISwitch  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UISwitch  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UISwitch  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UISwitch  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UISwitch  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UISwitch  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UISwitch  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UISwitch  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UISwitch  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UISwitch  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
