//
//  UIRefreshControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIRefreshControl (TFEasyCoder)





-(UIRefreshControl  *(^)(UIColor *  tintColor))set_tintColor;
-(UIRefreshControl  *(^)(NSAttributedString *  attributedTitle))set_attributedTitle;




//superclass pros UIControl
-(UIRefreshControl  *(^)(BOOL  enabled))set_enabled;
-(UIRefreshControl  *(^)(BOOL  selected))set_selected;
-(UIRefreshControl  *(^)(BOOL  highlighted))set_highlighted;
-(UIRefreshControl  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UIRefreshControl  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UIRefreshControl  *(^)(UIView *  maskView))set_maskView;
-(UIRefreshControl  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIRefreshControl  *(^)(long long  tag))set_tag;
-(UIRefreshControl  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIRefreshControl  *(^)(CGPoint  center))set_center;
-(UIRefreshControl  *(^)(CGRect  frame))set_frame;
-(UIRefreshControl  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIRefreshControl  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIRefreshControl  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIRefreshControl  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIRefreshControl  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIRefreshControl  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIRefreshControl  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIRefreshControl  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIRefreshControl  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIRefreshControl  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIRefreshControl  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIRefreshControl  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIRefreshControl  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIRefreshControl  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIRefreshControl  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIRefreshControl  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
