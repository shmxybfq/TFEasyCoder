//
//  UIActivityIndicatorView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIActivityIndicatorView (TFEasyCoder)





-(UIActivityIndicatorView  *(^)(long long  activityIndicatorViewStyle))set_activityIndicatorViewStyle;
-(UIActivityIndicatorView  *(^)(BOOL  hidesWhenStopped))set_hidesWhenStopped;
-(UIActivityIndicatorView  *(^)(UIColor *  color))set_color;





//superclass pros UIView
-(UIActivityIndicatorView  *(^)(UIView *  maskView))set_maskView;
-(UIActivityIndicatorView  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIActivityIndicatorView  *(^)(long long  tag))set_tag;
-(UIActivityIndicatorView  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIActivityIndicatorView  *(^)(CGPoint  center))set_center;
-(UIActivityIndicatorView  *(^)(CGRect  frame))set_frame;
-(UIActivityIndicatorView  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIActivityIndicatorView  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIActivityIndicatorView  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIActivityIndicatorView  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIActivityIndicatorView  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIActivityIndicatorView  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIActivityIndicatorView  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIActivityIndicatorView  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIActivityIndicatorView  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIActivityIndicatorView  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIActivityIndicatorView  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIActivityIndicatorView  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIActivityIndicatorView  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIActivityIndicatorView  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIActivityIndicatorView  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIActivityIndicatorView  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
