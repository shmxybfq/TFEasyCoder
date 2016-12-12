//
//  UIPageControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPageControl (TFEasyCoder)





-(UIPageControl  *(^)(long long  numberOfPages))set_numberOfPages;
-(UIPageControl  *(^)(long long  currentPage))set_currentPage;
-(UIPageControl  *(^)(BOOL  hidesForSinglePage))set_hidesForSinglePage;
-(UIPageControl  *(^)(BOOL  defersCurrentPageDisplay))set_defersCurrentPageDisplay;
-(UIPageControl  *(^)(UIColor *  pageIndicatorTintColor))set_pageIndicatorTintColor;
-(UIPageControl  *(^)(UIColor *  currentPageIndicatorTintColor))set_currentPageIndicatorTintColor;





//superclass pros UIControl
-(UIPageControl  *(^)(BOOL  enabled))set_enabled;
-(UIPageControl  *(^)(BOOL  selected))set_selected;
-(UIPageControl  *(^)(BOOL  highlighted))set_highlighted;
-(UIPageControl  *(^)(long long  contentVerticalAlignment))set_contentVerticalAlignment;
-(UIPageControl  *(^)(long long  contentHorizontalAlignment))set_contentHorizontalAlignment;
//superclass pros UIView
-(UIPageControl  *(^)(UIView *  maskView))set_maskView;
-(UIPageControl  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UIPageControl  *(^)(long long  tag))set_tag;
-(UIPageControl  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UIPageControl  *(^)(CGPoint  center))set_center;
-(UIPageControl  *(^)(CGRect  frame))set_frame;
-(UIPageControl  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UIPageControl  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UIPageControl  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPageControl  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPageControl  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPageControl  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPageControl  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPageControl  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPageControl  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPageControl  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPageControl  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPageControl  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPageControl  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPageControl  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPageControl  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPageControl  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
