//
//  UIToolbar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIToolbar (TFEasyCoder)





-(UIToolbar  *(^)(long long  barStyle))set_barStyle;
-(UIToolbar  *(^)(NSArray *  items))set_items;
-(UIToolbar  *(^)(BOOL  translucent))set_translucent;
-(UIToolbar  *(^)(UIColor *  tintColor))set_tintColor;
-(UIToolbar  *(^)(UIColor *  barTintColor))set_barTintColor;
-(UIToolbar  *(^)(id<UIToolbarDelegate>   delegate))set_delegate;





//superclass pros UIView
-(UIToolbar  *(^)(UIView *  maskView))set_maskView;
-(UIToolbar  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIToolbar  *(^)(long long  tag))set_tag;
-(UIToolbar  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIToolbar  *(^)(CGPoint  center))set_center;
-(UIToolbar  *(^)(CGRect  frame))set_frame;
-(UIToolbar  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIToolbar  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIToolbar  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIToolbar  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIToolbar  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIToolbar  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIToolbar  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIToolbar  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIToolbar  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIToolbar  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIToolbar  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIToolbar  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIToolbar  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIToolbar  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIToolbar  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIToolbar  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
