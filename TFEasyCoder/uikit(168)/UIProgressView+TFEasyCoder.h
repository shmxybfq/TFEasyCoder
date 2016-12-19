//
//  UIProgressView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIProgressView (TFEasyCoder)





-(UIProgressView  *(^)(long long  progressViewStyle))set_progressViewStyle;
-(UIProgressView  *(^)(float  progress))set_progress;
-(UIProgressView  *(^)(UIColor *  progressTintColor))set_progressTintColor;
-(UIProgressView  *(^)(UIColor *  trackTintColor))set_trackTintColor;
-(UIProgressView  *(^)(UIImage *  progressImage))set_progressImage;
-(UIProgressView  *(^)(UIImage *  trackImage))set_trackImage;
-(UIProgressView  *(^)(NSProgress *  observedProgress))set_observedProgress;




//superclass pros UIView
-(UIProgressView  *(^)(UIView *  maskView))set_maskView;
-(UIProgressView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIProgressView  *(^)(long long  tag))set_tag;
-(UIProgressView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIProgressView  *(^)(CGPoint  center))set_center;
-(UIProgressView  *(^)(CGRect  frame))set_frame;
-(UIProgressView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIProgressView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIProgressView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIProgressView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIProgressView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIProgressView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIProgressView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIProgressView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIProgressView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIProgressView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIProgressView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIProgressView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIProgressView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIProgressView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIProgressView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIProgressView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
