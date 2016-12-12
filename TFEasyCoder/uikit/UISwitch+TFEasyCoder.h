//
//  UISwitch+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UISwitch (TFEasyCoder)





-(UISwitch  *(^)(UIColor *  onTintColor))set_onTintColor;
-(UISwitch  *(^)(UIColor *  tintColor))set_tintColor;
-(UISwitch  *(^)(UIColor *  thumbTintColor))set_thumbTintColor;
-(UISwitch  *(^)(UIImage *  onImage))set_onImage;
-(UISwitch  *(^)(UIImage *  offImage))set_offImage;
-(UISwitch  *(^)(BOOL  on))set_on;





//superclass pros UIControl
-(UISwitch  *(^)(BOOL  enabled))set_enabled;
-(UISwitch  *(^)(BOOL  selected))set_selected;
-(UISwitch  *(^)(BOOL  highlighted))set_highlighted;
-(UISwitch  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UISwitch  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UISwitch  *(^)(UIView *  maskView))set_maskView;
-(UISwitch  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UISwitch  *(^)(long long  tag))set_tag;
-(UISwitch  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UISwitch  *(^)(CGPoint  center))set_center;
-(UISwitch  *(^)(CGRect  frame))set_frame;
-(UISwitch  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UISwitch  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UISwitch  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UISwitch  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UISwitch  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UISwitch  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UISwitch  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UISwitch  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UISwitch  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UISwitch  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UISwitch  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UISwitch  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UISwitch  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UISwitch  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UISwitch  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UISwitch  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
