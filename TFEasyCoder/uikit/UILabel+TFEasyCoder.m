//
//  UILabel+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILabel+TFEasyCoder.h"


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UILabel (TFEasyCoder)


-(UILabel *(^)(NSString *  text))set_text{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  text){
        weakSelf.text = text;
        return weakSelf;
    };
}

-(UILabel  *(^)(UIFont *  font))set_font{
    __weak typeof(self) weakSelf = self;
    return ^(UIFont *  font){
        weakSelf.font = font;
        return weakSelf;
    };
}

-(UILabel  *(^)(UIColor *  textColor))set_textColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  textColor){
        weakSelf.textColor = textColor;
        return weakSelf;
    };
}

-(UILabel  *(^)(UIColor *  shadowColor))set_shadowColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  shadowColor){
        weakSelf.shadowColor = shadowColor;
        return weakSelf;
    };
}

-(UILabel  *(^)(CGSize  shadowOffset))set_shadowOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  shadowOffset){
        weakSelf.shadowOffset = shadowOffset;
        return weakSelf;
    };
}

-(UILabel  *(^)(long long  textAlignment))set_textAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  textAlignment){
        weakSelf.textAlignment = textAlignment;
        return weakSelf;
    };
}

-(UILabel  *(^)(long long  lineBreakMode))set_lineBreakMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  lineBreakMode){
        weakSelf.lineBreakMode = lineBreakMode;
        return weakSelf;
    };
}

-(UILabel  *(^)(NSAttributedString *  attributedText))set_attributedText{
    __weak typeof(self) weakSelf = self;
    return ^(NSAttributedString *  attributedText){
        weakSelf.attributedText = attributedText;
        return weakSelf;
    };
}

-(UILabel  *(^)(UIColor *  highlightedTextColor))set_highlightedTextColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  highlightedTextColor){
        weakSelf.highlightedTextColor = highlightedTextColor;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  highlighted))set_highlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  highlighted){
        weakSelf.highlighted = highlighted;
        return weakSelf;
    };
}

//TF_EC_CHAIN_PROP_IMP(UILabel ,BOOL,userInteractionEnabled)
-(UILabel  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UILabel  *(^)(long long  numberOfLines))set_numberOfLines{
    __weak typeof(self) weakSelf = self;
    return ^(long long  numberOfLines){
        weakSelf.numberOfLines = numberOfLines;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  adjustsFontSizeToFitWidth))set_adjustsFontSizeToFitWidth{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  adjustsFontSizeToFitWidth){
        weakSelf.adjustsFontSizeToFitWidth = adjustsFontSizeToFitWidth;
        return weakSelf;
    };
}

-(UILabel  *(^)(long long  baselineAdjustment))set_baselineAdjustment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  baselineAdjustment){
        weakSelf.baselineAdjustment = baselineAdjustment;
        return weakSelf;
    };
}

-(UILabel  *(^)(double  minimumScaleFactor))set_minimumScaleFactor{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumScaleFactor){
        weakSelf.minimumScaleFactor = minimumScaleFactor;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  allowsDefaultTighteningForTruncation))set_allowsDefaultTighteningForTruncation{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsDefaultTighteningForTruncation){
        weakSelf.allowsDefaultTighteningForTruncation = allowsDefaultTighteningForTruncation;
        return weakSelf;
    };
}

-(UILabel  *(^)(double  preferredMaxLayoutWidth))set_preferredMaxLayoutWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  preferredMaxLayoutWidth){
        weakSelf.preferredMaxLayoutWidth = preferredMaxLayoutWidth;
        return weakSelf;
    };
}

-(UILabel  *(^)(double  minimumFontSize))set_minimumFontSize{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumFontSize){
        weakSelf.minimumFontSize = minimumFontSize;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  adjustsLetterSpacingToFitWidth))set_adjustsLetterSpacingToFitWidth{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  adjustsLetterSpacingToFitWidth){
        weakSelf.adjustsLetterSpacingToFitWidth = adjustsLetterSpacingToFitWidth;
        return weakSelf;
    };
}






//superclass pros UIView
-(UILabel  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UILabel  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UILabel  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UILabel  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UILabel  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UILabel  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UILabel  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UILabel  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UILabel  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UILabel  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UILabel  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UILabel  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UILabel  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UILabel  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UILabel  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UILabel  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UILabel  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UILabel  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}





@end
