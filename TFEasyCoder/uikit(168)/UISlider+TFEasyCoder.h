//
//  UISlider+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISlider (TFEasyCoder)





-(UISlider  *(^)(float  value))set_value;
-(UISlider  *(^)(float  minimumValue))set_minimumValue;
-(UISlider  *(^)(float  maximumValue))set_maximumValue;
-(UISlider  *(^)(UIImage *  minimumValueImage))set_minimumValueImage;
-(UISlider  *(^)(UIImage *  maximumValueImage))set_maximumValueImage;
-(UISlider  *(^)(BOOL  continuous))set_continuous;
-(UISlider  *(^)(UIColor *  minimumTrackTintColor))set_minimumTrackTintColor;
-(UISlider  *(^)(UIColor *  maximumTrackTintColor))set_maximumTrackTintColor;
-(UISlider  *(^)(UIColor *  thumbTintColor))set_thumbTintColor;




//superclass pros UIControl
-(UISlider  *(^)(BOOL  enabled))set_enabled;
-(UISlider  *(^)(BOOL  selected))set_selected;
-(UISlider  *(^)(BOOL  highlighted))set_highlighted;
-(UISlider  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UISlider  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UISlider  *(^)(UIView *  maskView))set_maskView;
-(UISlider  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UISlider  *(^)(long long  tag))set_tag;
-(UISlider  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UISlider  *(^)(CGPoint  center))set_center;
-(UISlider  *(^)(CGRect  frame))set_frame;
-(UISlider  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UISlider  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UISlider  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISlider  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISlider  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISlider  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISlider  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISlider  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISlider  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISlider  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISlider  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISlider  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISlider  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISlider  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISlider  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISlider  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
