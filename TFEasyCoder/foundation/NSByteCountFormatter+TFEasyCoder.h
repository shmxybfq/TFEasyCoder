//
//  NSByteCountFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSByteCountFormatter (TFEasyCoder)





-(NSByteCountFormatter  *(^)(unsigned long long  allowedUnits))set_allowedUnits;
-(NSByteCountFormatter  *(^)(long long  countStyle))set_countStyle;
-(NSByteCountFormatter  *(^)(BOOL  allowsNonnumericFormatting))set_allowsNonnumericFormatting;
-(NSByteCountFormatter  *(^)(BOOL  includesUnit))set_includesUnit;
-(NSByteCountFormatter  *(^)(BOOL  includesCount))set_includesCount;
-(NSByteCountFormatter  *(^)(BOOL  includesActualByteCount))set_includesActualByteCount;
-(NSByteCountFormatter  *(^)(BOOL  adaptive))set_adaptive;
-(NSByteCountFormatter  *(^)(BOOL  zeroPadsFractionDigits))set_zeroPadsFractionDigits;
-(NSByteCountFormatter  *(^)(long long  formattingContext))set_formattingContext;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSByteCountFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSByteCountFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSByteCountFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSByteCountFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSByteCountFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSByteCountFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSByteCountFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSByteCountFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSByteCountFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSByteCountFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSByteCountFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSByteCountFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSByteCountFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSByteCountFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end