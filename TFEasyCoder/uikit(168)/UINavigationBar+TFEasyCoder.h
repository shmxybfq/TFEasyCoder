//
//  UINavigationBar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UINavigationBar (TFEasyCoder)





-(UINavigationBar  *(^)(long long  barStyle))set_barStyle;
-(UINavigationBar  *(^)(id<UINavigationBarDelegate>  delegate))set_delegate;
-(UINavigationBar  *(^)(BOOL  translucent))set_translucent;
-(UINavigationBar  *(^)(NSArray *  items))set_items;
-(UINavigationBar  *(^)(UIColor *  tintColor))set_tintColor;
-(UINavigationBar  *(^)(UIColor *  barTintColor))set_barTintColor;
-(UINavigationBar  *(^)(UIImage *  shadowImage))set_shadowImage;
-(UINavigationBar  *(^)(NSDictionary *  titleTextAttributes))set_titleTextAttributes;
-(UINavigationBar  *(^)(UIImage *  backIndicatorImage))set_backIndicatorImage;
-(UINavigationBar  *(^)(UIImage *  backIndicatorTransitionMaskImage))set_backIndicatorTransitionMaskImage;




//superclass pros UIView
-(UINavigationBar  *(^)(UIView *  maskView))set_maskView;
-(UINavigationBar  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UINavigationBar  *(^)(long long  tag))set_tag;
-(UINavigationBar  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UINavigationBar  *(^)(CGPoint  center))set_center;
-(UINavigationBar  *(^)(CGRect  frame))set_frame;
-(UINavigationBar  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UINavigationBar  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UINavigationBar  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UINavigationBar  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UINavigationBar  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UINavigationBar  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UINavigationBar  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UINavigationBar  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UINavigationBar  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UINavigationBar  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UINavigationBar  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UINavigationBar  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UINavigationBar  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UINavigationBar  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UINavigationBar  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UINavigationBar  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
