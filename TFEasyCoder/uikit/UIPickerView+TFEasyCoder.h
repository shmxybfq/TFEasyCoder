//
//  UIPickerView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPickerView (TFEasyCoder)





-(UIPickerView  *(^)(id<UIPickerViewDataSource>  dataSource))set_dataSource;
-(UIPickerView  *(^)(id<UIPickerViewDelegate>  delegate))set_delegate;
-(UIPickerView  *(^)(BOOL  showsSelectionIndicator))set_showsSelectionIndicator;





//superclass pros UIView
-(UIPickerView  *(^)(UIView *  maskView))set_maskView;
-(UIPickerView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIPickerView  *(^)(long long  tag))set_tag;
-(UIPickerView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIPickerView  *(^)(CGPoint  center))set_center;
-(UIPickerView  *(^)(CGRect  frame))set_frame;
-(UIPickerView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIPickerView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIPickerView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPickerView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPickerView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPickerView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPickerView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPickerView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPickerView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPickerView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPickerView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPickerView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPickerView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPickerView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPickerView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPickerView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
