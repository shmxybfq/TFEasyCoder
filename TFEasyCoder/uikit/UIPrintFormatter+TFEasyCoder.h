//
//  UIPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPrintFormatter (TFEasyCoder)





-(UIPrintFormatter  *(^)(double  maximumContentHeight))set_maximumContentHeight;
-(UIPrintFormatter  *(^)(double  maximumContentWidth))set_maximumContentWidth;
-(UIPrintFormatter  *(^)(UIEdgeInsets  contentInsets))set_contentInsets;
-(UIPrintFormatter  *(^)(UIEdgeInsets  perPageContentInsets))set_perPageContentInsets;
-(UIPrintFormatter  *(^)(long long  startPage))set_startPage;




//superclass pros NSObject
-(UIPrintFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPrintFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPrintFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPrintFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPrintFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPrintFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPrintFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPrintFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPrintFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPrintFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPrintFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPrintFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPrintFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPrintFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end