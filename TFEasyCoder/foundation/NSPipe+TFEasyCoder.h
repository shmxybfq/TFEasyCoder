//
//  NSPipe+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPipe (TFEasyCoder)









//superclass pros NSObject
-(NSPipe  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPipe  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPipe  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPipe  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPipe  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPipe  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPipe  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPipe  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPipe  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPipe  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPipe  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPipe  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPipe  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPipe  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end