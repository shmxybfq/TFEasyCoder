//
//  UIWebView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIWebView (TFEasyCoder)





-(UIWebView  *(^)(id<UIWebViewDelegate>   delegate))set_delegate;
-(UIWebView  *(^)(BOOL  scalesPageToFit))set_scalesPageToFit;
-(UIWebView  *(^)(BOOL  detectsPhoneNumbers))set_detectsPhoneNumbers;
-(UIWebView  *(^)(unsigned long long  dataDetectorTypes))set_dataDetectorTypes;
-(UIWebView  *(^)(BOOL  allowsInlineMediaPlayback))set_allowsInlineMediaPlayback;
-(UIWebView  *(^)(BOOL  mediaPlaybackRequiresUserAction))set_mediaPlaybackRequiresUserAction;
-(UIWebView  *(^)(BOOL  mediaPlaybackAllowsAirPlay))set_mediaPlaybackAllowsAirPlay;
-(UIWebView  *(^)(BOOL  suppressesIncrementalRendering))set_suppressesIncrementalRendering;
-(UIWebView  *(^)(BOOL  keyboardDisplayRequiresUserAction))set_keyboardDisplayRequiresUserAction;
-(UIWebView  *(^)(long long  paginationMode))set_paginationMode;
-(UIWebView  *(^)(long long  paginationBreakingMode))set_paginationBreakingMode;
-(UIWebView  *(^)(double  pageLength))set_pageLength;
-(UIWebView  *(^)(double  gapBetweenPages))set_gapBetweenPages;
-(UIWebView  *(^)(BOOL  allowsPictureInPictureMediaPlayback))set_allowsPictureInPictureMediaPlayback;
-(UIWebView  *(^)(BOOL  allowsLinkPreview))set_allowsLinkPreview;




//superclass pros UIView
-(UIWebView  *(^)(UIView *  maskView))set_maskView;
-(UIWebView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIWebView  *(^)(long long  tag))set_tag;
-(UIWebView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIWebView  *(^)(CGPoint  center))set_center;
-(UIWebView  *(^)(CGRect  frame))set_frame;
-(UIWebView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIWebView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIWebView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIWebView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIWebView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIWebView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIWebView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIWebView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIWebView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIWebView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIWebView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIWebView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIWebView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIWebView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIWebView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIWebView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
