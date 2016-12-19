//
//  UIControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIControl (TFEasyCoder)





-(UIControl  *(^)(BOOL  enabled))set_enabled;
-(UIControl  *(^)(BOOL  selected))set_selected;
-(UIControl  *(^)(BOOL  highlighted))set_highlighted;
-(UIControl  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UIControl  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;




//superclass pros UIView
-(UIControl  *(^)(UIView *  maskView))set_maskView;
-(UIControl  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIControl  *(^)(long long  tag))set_tag;
-(UIControl  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIControl  *(^)(CGPoint  center))set_center;
-(UIControl  *(^)(CGRect  frame))set_frame;
-(UIControl  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIControl  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIControl  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIControl  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIControl  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIControl  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIControl  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIControl  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIControl  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIControl  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIControl  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIControl  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIControl  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIControl  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIControl  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIControl  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
