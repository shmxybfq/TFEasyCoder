//
//  NSFileManager+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSFileManager (TFEasyCoder)





-(NSFileManager  *(^)(id<NSFileManagerDelegate>   delegate))set_delegate;




//superclass pros NSObject
-(NSFileManager  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFileManager  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFileManager  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFileManager  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFileManager  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFileManager  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFileManager  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFileManager  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFileManager  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFileManager  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFileManager  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFileManager  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFileManager  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFileManager  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end