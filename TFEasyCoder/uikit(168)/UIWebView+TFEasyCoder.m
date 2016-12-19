//
//  UIWebView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIWebView+TFEasyCoder.h"



#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation UIWebView (TFEasyCoder)





-(UIWebView  *(^)(id<UIWebViewDelegate>    delegate))set_delegate{
    __weak typeof(self) weakSelf = self;
    return ^(id<UIWebViewDelegate>    delegate){
        weakSelf.delegate = delegate;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  scalesPageToFit))set_scalesPageToFit{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  scalesPageToFit){
        weakSelf.scalesPageToFit = scalesPageToFit;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  detectsPhoneNumbers))set_detectsPhoneNumbers{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  detectsPhoneNumbers){
        weakSelf.detectsPhoneNumbers = detectsPhoneNumbers;
        return weakSelf;
    };
}

-(UIWebView  *(^)(unsigned long long  dataDetectorTypes))set_dataDetectorTypes{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  dataDetectorTypes){
        weakSelf.dataDetectorTypes = dataDetectorTypes;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  allowsInlineMediaPlayback))set_allowsInlineMediaPlayback{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsInlineMediaPlayback){
        weakSelf.allowsInlineMediaPlayback = allowsInlineMediaPlayback;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  mediaPlaybackRequiresUserAction))set_mediaPlaybackRequiresUserAction{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  mediaPlaybackRequiresUserAction){
        weakSelf.mediaPlaybackRequiresUserAction = mediaPlaybackRequiresUserAction;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  mediaPlaybackAllowsAirPlay))set_mediaPlaybackAllowsAirPlay{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  mediaPlaybackAllowsAirPlay){
        weakSelf.mediaPlaybackAllowsAirPlay = mediaPlaybackAllowsAirPlay;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  suppressesIncrementalRendering))set_suppressesIncrementalRendering{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  suppressesIncrementalRendering){
        weakSelf.suppressesIncrementalRendering = suppressesIncrementalRendering;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  keyboardDisplayRequiresUserAction))set_keyboardDisplayRequiresUserAction{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  keyboardDisplayRequiresUserAction){
        weakSelf.keyboardDisplayRequiresUserAction = keyboardDisplayRequiresUserAction;
        return weakSelf;
    };
}

-(UIWebView  *(^)(long long  paginationMode))set_paginationMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  paginationMode){
        weakSelf.paginationMode = paginationMode;
        return weakSelf;
    };
}

-(UIWebView  *(^)(long long  paginationBreakingMode))set_paginationBreakingMode{
    __weak typeof(self) weakSelf = self;
    return ^(long long  paginationBreakingMode){
        weakSelf.paginationBreakingMode = paginationBreakingMode;
        return weakSelf;
    };
}

-(UIWebView  *(^)(double  pageLength))set_pageLength{
    __weak typeof(self) weakSelf = self;
    return ^(double  pageLength){
        weakSelf.pageLength = pageLength;
        return weakSelf;
    };
}

-(UIWebView  *(^)(double  gapBetweenPages))set_gapBetweenPages{
    __weak typeof(self) weakSelf = self;
    return ^(double  gapBetweenPages){
        weakSelf.gapBetweenPages = gapBetweenPages;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  allowsPictureInPictureMediaPlayback))set_allowsPictureInPictureMediaPlayback{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsPictureInPictureMediaPlayback){
        weakSelf.allowsPictureInPictureMediaPlayback = allowsPictureInPictureMediaPlayback;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  allowsLinkPreview))set_allowsLinkPreview{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  allowsLinkPreview){
        weakSelf.allowsLinkPreview = allowsLinkPreview;
        return weakSelf;
    };
}





//superclass pros UIView
-(UIWebView  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UIWebView  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UIWebView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UIWebView  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UIWebView  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UIWebView  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UIWebView  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UIWebView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UIWebView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UIWebView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UIWebView  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UIWebView  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UIWebView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UIWebView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UIWebView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UIWebView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UIWebView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UIWebView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
