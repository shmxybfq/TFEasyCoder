//
//  UISegmentedControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISegmentedControl (TFEasyCoder)





-(UISegmentedControl  *(^)(long long  segmentedControlStyle))set_segmentedControlStyle;
-(UISegmentedControl  *(^)(BOOL  momentary))set_momentary;
-(UISegmentedControl  *(^)(BOOL  apportionsSegmentWidthsByContent))set_apportionsSegmentWidthsByContent;
-(UISegmentedControl  *(^)(long long  selectedSegmentIndex))set_selectedSegmentIndex;
-(UISegmentedControl  *(^)(UIColor *  tintColor))set_tintColor;




//superclass pros UIControl
-(UISegmentedControl  *(^)(BOOL  enabled))set_enabled;
-(UISegmentedControl  *(^)(BOOL  selected))set_selected;
-(UISegmentedControl  *(^)(BOOL  highlighted))set_highlighted;
-(UISegmentedControl  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UISegmentedControl  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UISegmentedControl  *(^)(UIView *  maskView))set_maskView;
-(UISegmentedControl  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UISegmentedControl  *(^)(long long  tag))set_tag;
-(UISegmentedControl  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UISegmentedControl  *(^)(CGPoint  center))set_center;
-(UISegmentedControl  *(^)(CGRect  frame))set_frame;
-(UISegmentedControl  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UISegmentedControl  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UISegmentedControl  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISegmentedControl  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISegmentedControl  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISegmentedControl  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISegmentedControl  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISegmentedControl  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISegmentedControl  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISegmentedControl  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISegmentedControl  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISegmentedControl  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISegmentedControl  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISegmentedControl  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISegmentedControl  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISegmentedControl  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
