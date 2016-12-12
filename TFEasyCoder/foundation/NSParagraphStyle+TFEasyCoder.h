//
//  NSParagraphStyle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSParagraphStyle (TFEasyCoder)









//superclass pros NSObject
-(NSParagraphStyle  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSParagraphStyle  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSParagraphStyle  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSParagraphStyle  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSParagraphStyle  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSParagraphStyle  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSParagraphStyle  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSParagraphStyle  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSParagraphStyle  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSParagraphStyle  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSParagraphStyle  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSParagraphStyle  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSParagraphStyle  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSParagraphStyle  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end