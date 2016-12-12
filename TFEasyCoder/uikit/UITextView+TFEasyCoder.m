//
//  UITextView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextView+TFEasyCoder.h"


@implementation UITextView (TFEasyCoder)





-(UITextView  *(^)(id<UITextViewDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITextViewDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSString *  text))set_text{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  text){
        weakSelf.text = text;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIFont *  font))set_font{
    __weak typeof(self) weakSelf = self;
    return ^(UIFont *  font){
        weakSelf.font = font;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIColor *  textColor))set_textColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  textColor){
        weakSelf.textColor = textColor;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  textAlignment))set_textAlignment{
    __weak typeof(self) weakSelf = self;
    return ^(long long  textAlignment){
        weakSelf.textAlignment = textAlignment;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  editable))set_editable{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  editable){
        weakSelf.editable = editable;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  selectable))set_selectable{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  selectable){
        weakSelf.selectable = selectable;
        return weakSelf;
    };
}

-(UITextView  *(^)(unsigned long long  dataDetectorTypes))set_dataDetectorTypes{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  dataDetectorTypes){
        weakSelf.dataDetectorTypes = dataDetectorTypes;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  allowsEditingTextAttributes))set_allowsEditingTextAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsEditingTextAttributes){
        weakSelf.allowsEditingTextAttributes = allowsEditingTextAttributes;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSAttributedString *  attributedText))set_attributedText{
    __weak typeof(self) weakSelf = self;
    return ^(NSAttributedString *  attributedText){
        weakSelf.attributedText = attributedText;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSDictionary *  typingAttributes))set_typingAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  typingAttributes){
        weakSelf.typingAttributes = typingAttributes;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIView *  inputView))set_inputView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  inputView){
        weakSelf.inputView = inputView;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIView *  inputAccessoryView))set_inputAccessoryView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  inputAccessoryView){
        weakSelf.inputAccessoryView = inputAccessoryView;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  clearsOnInsertion))set_clearsOnInsertion{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  clearsOnInsertion){
        weakSelf.clearsOnInsertion = clearsOnInsertion;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIEdgeInsets  textContainerInset))set_textContainerInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  textContainerInset){
        weakSelf.textContainerInset = textContainerInset;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSDictionary *  linkTextAttributes))set_linkTextAttributes{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  linkTextAttributes){
        weakSelf.linkTextAttributes = linkTextAttributes;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  autocapitalizationType))set_autocapitalizationType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  autocapitalizationType){
        weakSelf.autocapitalizationType = autocapitalizationType;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  autocorrectionType))set_autocorrectionType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  autocorrectionType){
        weakSelf.autocorrectionType = autocorrectionType;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  spellCheckingType))set_spellCheckingType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  spellCheckingType){
        weakSelf.spellCheckingType = spellCheckingType;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  keyboardType))set_keyboardType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardType){
        weakSelf.keyboardType = keyboardType;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  keyboardAppearance))set_keyboardAppearance{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardAppearance){
        weakSelf.keyboardAppearance = keyboardAppearance;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  returnKeyType))set_returnKeyType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  returnKeyType){
        weakSelf.returnKeyType = returnKeyType;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  enablesReturnKeyAutomatically))set_enablesReturnKeyAutomatically{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  enablesReturnKeyAutomatically){
        weakSelf.enablesReturnKeyAutomatically = enablesReturnKeyAutomatically;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  secureTextEntry))set_secureTextEntry{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  secureTextEntry){
        weakSelf.secureTextEntry = secureTextEntry;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSDictionary *  markedTextStyle))set_markedTextStyle{
    __weak typeof(self) weakSelf = self;
    return ^(NSDictionary *  markedTextStyle){
        weakSelf.markedTextStyle = markedTextStyle;
        return weakSelf;
    };
}

-(UITextView  *(^)(id<UITextInputDelegate>    inputDelegate))set_inputDelegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UITextInputDelegate>    inputDelegate){
        weakSelf.inputDelegate = inputDelegate;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  selectionAffinity))set_selectionAffinity{
    __weak typeof(self) weakSelf = self;
    return ^(long long  selectionAffinity){
        weakSelf.selectionAffinity = selectionAffinity;
        return weakSelf;
    };
}





//superclass pros UIScrollView
-(UITextView  *(^)(CGPoint  contentOffset))set_contentOffset{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  contentOffset){
        weakSelf.contentOffset = contentOffset;
        return weakSelf;
    };
}

-(UITextView  *(^)(CGSize  contentSize))set_contentSize{
    __weak typeof(self) weakSelf = self;
    return ^(CGSize  contentSize){
        weakSelf.contentSize = contentSize;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIEdgeInsets  contentInset))set_contentInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  contentInset){
        weakSelf.contentInset = contentInset;
        return weakSelf;
    };
}

//TF_EC_CHAIN_PROP_IMP(UITextView ,id<UIScrollViewDelegate>  ,delegate)
-(UITextView  *(^)(BOOL  directionalLockEnabled))set_directionalLockEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  directionalLockEnabled){
        weakSelf.directionalLockEnabled = directionalLockEnabled;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  bounces))set_bounces{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bounces){
        weakSelf.bounces = bounces;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  alwaysBounceVertical))set_alwaysBounceVertical{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceVertical){
        weakSelf.alwaysBounceVertical = alwaysBounceVertical;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  alwaysBounceHorizontal))set_alwaysBounceHorizontal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  alwaysBounceHorizontal){
        weakSelf.alwaysBounceHorizontal = alwaysBounceHorizontal;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  pagingEnabled))set_pagingEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  pagingEnabled){
        weakSelf.pagingEnabled = pagingEnabled;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  scrollEnabled))set_scrollEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollEnabled){
        weakSelf.scrollEnabled = scrollEnabled;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  showsHorizontalScrollIndicator))set_showsHorizontalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsHorizontalScrollIndicator){
        weakSelf.showsHorizontalScrollIndicator = showsHorizontalScrollIndicator;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  showsVerticalScrollIndicator))set_showsVerticalScrollIndicator{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsVerticalScrollIndicator){
        weakSelf.showsVerticalScrollIndicator = showsVerticalScrollIndicator;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIEdgeInsets  scrollIndicatorInsets))set_scrollIndicatorInsets{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  scrollIndicatorInsets){
        weakSelf.scrollIndicatorInsets = scrollIndicatorInsets;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  indicatorStyle))set_indicatorStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  indicatorStyle){
        weakSelf.indicatorStyle = indicatorStyle;
        return weakSelf;
    };
}

-(UITextView  *(^)(double  decelerationRate))set_decelerationRate{
    __weak typeof(self) weakSelf = self;
    return ^(double  decelerationRate){
        weakSelf.decelerationRate = decelerationRate;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  delaysContentTouches))set_delaysContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  delaysContentTouches){
        weakSelf.delaysContentTouches = delaysContentTouches;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  canCancelContentTouches))set_canCancelContentTouches{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  canCancelContentTouches){
        weakSelf.canCancelContentTouches = canCancelContentTouches;
        return weakSelf;
    };
}

-(UITextView  *(^)(double  minimumZoomScale))set_minimumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  minimumZoomScale){
        weakSelf.minimumZoomScale = minimumZoomScale;
        return weakSelf;
    };
}

-(UITextView  *(^)(double  maximumZoomScale))set_maximumZoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  maximumZoomScale){
        weakSelf.maximumZoomScale = maximumZoomScale;
        return weakSelf;
    };
}

-(UITextView  *(^)(double  zoomScale))set_zoomScale{
    __weak typeof(self) weakSelf = self;
    return ^(double  zoomScale){
        weakSelf.zoomScale = zoomScale;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  bouncesZoom))set_bouncesZoom{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  bouncesZoom){
        weakSelf.bouncesZoom = bouncesZoom;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  scrollsToTop))set_scrollsToTop{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scrollsToTop){
        weakSelf.scrollsToTop = scrollsToTop;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  keyboardDismissMode))set_keyboardDismissMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  keyboardDismissMode){
        weakSelf.keyboardDismissMode = keyboardDismissMode;
        return weakSelf;
    };
}

//superclass pros UIView
-(UITextView  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UITextView  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UITextView  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UITextView  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UITextView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UITextView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UITextView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UITextView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UITextView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UITextView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UITextView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
