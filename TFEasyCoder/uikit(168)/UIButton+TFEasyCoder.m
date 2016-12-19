//
//  UIButton+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIButton+TFEasyCoder.h"


@implementation UIButton (TFEasyCoder)





-(UIButton  *(^)(UIEdgeInsets  contentEdgeInsets))set_contentEdgeInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  contentEdgeInsets){
        weakSelf.contentEdgeInsets = contentEdgeInsets;
        return weakSelf;
    };
}

-(UIButton  *(^)(UIEdgeInsets  titleEdgeInsets))set_titleEdgeInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  titleEdgeInsets){
        weakSelf.titleEdgeInsets = titleEdgeInsets;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  reversesTitleShadowWhenHighlighted))set_reversesTitleShadowWhenHighlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  reversesTitleShadowWhenHighlighted){
        weakSelf.reversesTitleShadowWhenHighlighted = reversesTitleShadowWhenHighlighted;
        return weakSelf;
    };
}

-(UIButton  *(^)(UIEdgeInsets  imageEdgeInsets))set_imageEdgeInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  imageEdgeInsets){
        weakSelf.imageEdgeInsets = imageEdgeInsets;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  adjustsImageWhenHighlighted))set_adjustsImageWhenHighlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  adjustsImageWhenHighlighted){
        weakSelf.adjustsImageWhenHighlighted = adjustsImageWhenHighlighted;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  adjustsImageWhenDisabled))set_adjustsImageWhenDisabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  adjustsImageWhenDisabled){
        weakSelf.adjustsImageWhenDisabled = adjustsImageWhenDisabled;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  showsTouchWhenHighlighted))set_showsTouchWhenHighlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsTouchWhenHighlighted){
        weakSelf.showsTouchWhenHighlighted = showsTouchWhenHighlighted;
        return weakSelf;
    };
}

-(UIButton  *(^)(UIColor *  tintColor))set_tintColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  tintColor){
        weakSelf.tintColor = tintColor;
        return weakSelf;
    };
}



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


-(UIButton  *(^)(UIFont *  font))set_font{
    __weak typeof(self) weakSelf = self;
    return ^(UIFont *  font){
        weakSelf.font = font;
        return weakSelf;
    };
}

-(UIButton  *(^)(NSLineBreakMode   lineBreakMode))set_lineBreakMode{
    __weak typeof(self) weakSelf = self;
    return ^(NSLineBreakMode   lineBreakMode){
        weakSelf.lineBreakMode = lineBreakMode;
        return weakSelf;
    };
}

-(UIButton  *(^)(CGSize   titleShadowOffset))set_titleShadowOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize   titleShadowOffset){
        weakSelf.titleShadowOffset = titleShadowOffset;
        return weakSelf;
    };
}








//superclass pros UIControl
-(UIButton  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  selected))set_selected{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  selected){
        weakSelf.selected = selected;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  highlighted))set_highlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  highlighted){
        weakSelf.highlighted = highlighted;
        return weakSelf;
    };
}

-(UIButton  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentVerticalAlignment){
        weakSelf.contentVerticalAlignment = contentVerticalAlignment;
        return weakSelf;
    };
}

-(UIButton  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentHorizontalAlignment){
        weakSelf.contentHorizontalAlignment = contentHorizontalAlignment;
        return weakSelf;
    };
}

//superclass pros UIView
-(UIButton  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UIButton  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UIButton  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UIButton  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UIButton  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UIButton  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIButton  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIButton  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIButton  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIButton  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIButton  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIButton  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIButton  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIButton  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIButton  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIButton  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIButton  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIButton  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
