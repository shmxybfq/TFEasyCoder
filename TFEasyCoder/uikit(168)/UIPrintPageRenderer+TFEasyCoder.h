//
//  UIPrintPageRenderer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPrintPageRenderer (TFEasyCoder)





-(UIPrintPageRenderer  *(^)(double  headerHeight))set_headerHeight;
-(UIPrintPageRenderer  *(^)(double  footerHeight))set_footerHeight;
-(UIPrintPageRenderer  *(^)(NSArray *  printFormatters))set_printFormatters;




//superclass pros NSObject
-(UIPrintPageRenderer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPrintPageRenderer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPrintPageRenderer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPrintPageRenderer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPrintPageRenderer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPrintPageRenderer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPrintPageRenderer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPrintPageRenderer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPrintPageRenderer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPrintPageRenderer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPrintPageRenderer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPrintPageRenderer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPrintPageRenderer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPrintPageRenderer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end