//
//  UITextField+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextField+TFEasyCoder.h"


@implementation UITextField (TFEasyCoder)





-(UITextField  *(^)(NSString *  text))set_text{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  text){
        weakSelf.text = text;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSAttributedString *  attributedText))set_attributedText{
    __weak typeof(self) weakSelf = self;
    return ^(NSAttributedString *  attributedText){
        weakSelf.attributedText = attributedText;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIColor *  textColor))set_textColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  textColor){
        weakSelf.textColor = textColor;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIFont *  font))set_font{
    __weak typeof(self) weakSelf = self;
    return ^(UIFont *  font){
        weakSelf.font = font;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  textAlignment))set_textAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  textAlignment){
        weakSelf.textAlignment = textAlignment;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  borderStyle))set_borderStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  borderStyle){
        weakSelf.borderStyle = borderStyle;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSDictionary *  defaultTextAttributes))set_defaultTextAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  defaultTextAttributes){
        weakSelf.defaultTextAttributes = defaultTextAttributes;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSString *  placeholder))set_placeholder{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  placeholder){
        weakSelf.placeholder = placeholder;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSAttributedString *  attributedPlaceholder))set_attributedPlaceholder{
    __weak typeof(self) weakSelf = self;
    return ^(NSAttributedString *  attributedPlaceholder){
        weakSelf.attributedPlaceholder = attributedPlaceholder;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  clearsOnBeginEditing))set_clearsOnBeginEditing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  clearsOnBeginEditing){
        weakSelf.clearsOnBeginEditing = clearsOnBeginEditing;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  adjustsFontSizeToFitWidth))set_adjustsFontSizeToFitWidth{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  adjustsFontSizeToFitWidth){
        weakSelf.adjustsFontSizeToFitWidth = adjustsFontSizeToFitWidth;
        return weakSelf;
    };
}

-(UITextField  *(^)(double  minimumFontSize))set_minimumFontSize{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumFontSize){
        weakSelf.minimumFontSize = minimumFontSize;
        return weakSelf;
    };
}

-(UITextField  *(^)(id<UITextFieldDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITextFieldDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIImage *  background))set_background{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  background){
        weakSelf.background = background;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIImage *  disabledBackground))set_disabledBackground{
    __weak typeof(self) weakSelf = self;
    return ^(UIImage *  disabledBackground){
        weakSelf.disabledBackground = disabledBackground;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  allowsEditingTextAttributes))set_allowsEditingTextAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEditingTextAttributes){
        weakSelf.allowsEditingTextAttributes = allowsEditingTextAttributes;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSDictionary *  typingAttributes))set_typingAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  typingAttributes){
        weakSelf.typingAttributes = typingAttributes;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  clearButtonMode))set_clearButtonMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  clearButtonMode){
        weakSelf.clearButtonMode = clearButtonMode;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIView *  leftView))set_leftView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  leftView){
        weakSelf.leftView = leftView;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  leftViewMode))set_leftViewMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  leftViewMode){
        weakSelf.leftViewMode = leftViewMode;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIView *  rightView))set_rightView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  rightView){
        weakSelf.rightView = rightView;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  rightViewMode))set_rightViewMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  rightViewMode){
        weakSelf.rightViewMode = rightViewMode;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIView *  inputView))set_inputView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  inputView){
        weakSelf.inputView = inputView;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIView *  inputAccessoryView))set_inputAccessoryView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  inputAccessoryView){
        weakSelf.inputAccessoryView = inputAccessoryView;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  clearsOnInsertion))set_clearsOnInsertion{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  clearsOnInsertion){
        weakSelf.clearsOnInsertion = clearsOnInsertion;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  autocapitalizationType))set_autocapitalizationType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  autocapitalizationType){
        weakSelf.autocapitalizationType = autocapitalizationType;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  autocorrectionType))set_autocorrectionType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  autocorrectionType){
        weakSelf.autocorrectionType = autocorrectionType;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  spellCheckingType))set_spellCheckingType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  spellCheckingType){
        weakSelf.spellCheckingType = spellCheckingType;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  keyboardType))set_keyboardType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardType){
        weakSelf.keyboardType = keyboardType;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  keyboardAppearance))set_keyboardAppearance{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardAppearance){
        weakSelf.keyboardAppearance = keyboardAppearance;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  returnKeyType))set_returnKeyType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  returnKeyType){
        weakSelf.returnKeyType = returnKeyType;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  enablesReturnKeyAutomatically))set_enablesReturnKeyAutomatically{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enablesReturnKeyAutomatically){
        weakSelf.enablesReturnKeyAutomatically = enablesReturnKeyAutomatically;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  secureTextEntry))set_secureTextEntry{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  secureTextEntry){
        weakSelf.secureTextEntry = secureTextEntry;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSDictionary *  markedTextStyle))set_markedTextStyle{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  markedTextStyle){
        weakSelf.markedTextStyle = markedTextStyle;
        return weakSelf;
    };
}

-(UITextField  *(^)(id<UITextInputDelegate>    inputDelegate))set_inputDelegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITextInputDelegate>    inputDelegate){
        weakSelf.inputDelegate = inputDelegate;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  selectionAffinity))set_selectionAffinity{
    __weak typeof(self) weakSelf = self;
    return ^(long long  selectionAffinity){
        weakSelf.selectionAffinity = selectionAffinity;
        return weakSelf;
    };
}





//superclass pros UIControl
-(UITextField  *(^)(BOOL  enabled))set_enabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enabled){
        weakSelf.enabled = enabled;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  selected))set_selected{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  selected){
        weakSelf.selected = selected;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  highlighted))set_highlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  highlighted){
        weakSelf.highlighted = highlighted;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentVerticalAlignment){
        weakSelf.contentVerticalAlignment = contentVerticalAlignment;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  contentHorizontalAlignment){
        weakSelf.contentHorizontalAlignment = contentHorizontalAlignment;
        return weakSelf;
    };
}

//superclass pros UIView
-(UITextField  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UITextField  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UITextField  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UITextField  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UITextField  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UITextField  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UITextField  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UITextField  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UITextField  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UITextField  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UITextField  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
