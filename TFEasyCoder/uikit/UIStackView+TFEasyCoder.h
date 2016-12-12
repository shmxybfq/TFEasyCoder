//
//  UIStackView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIStackView (TFEasyCoder)





-(UIStackView  *(^)(long long  axis))set_axis;
-(UIStackView  *(^)(long long  distribution))set_distribution;
-(UIStackView  *(^)(long long  alignment))set_alignment;
-(UIStackView  *(^)(double  spacing))set_spacing;




//superclass pros UIView
-(UIStackView  *(^)(UIView *  maskView))set_maskView;
-(UIStackView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIStackView  *(^)(long long  tag))set_tag;
-(UIStackView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIStackView  *(^)(CGPoint  center))set_center;
-(UIStackView  *(^)(CGRect  frame))set_frame;
-(UIStackView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIStackView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIStackView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIStackView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIStackView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIStackView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIStackView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIStackView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIStackView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIStackView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIStackView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIStackView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIStackView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIStackView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIStackView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIStackView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
