//
//  NSTextAttachment+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSTextAttachment (TFEasyCoder)





-(NSTextAttachment  *(^)(NSData *  contents))set_contents;
-(NSTextAttachment  *(^)(NSString *  fileType))set_fileType;
-(NSTextAttachment  *(^)(UIImage *  image))set_image;
-(NSTextAttachment  *(^)(NSFileWrapper *  fileWrapper))set_fileWrapper;




//superclass pros NSObject
-(NSTextAttachment  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSTextAttachment  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSTextAttachment  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSTextAttachment  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSTextAttachment  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSTextAttachment  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSTextAttachment  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSTextAttachment  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSTextAttachment  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSTextAttachment  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSTextAttachment  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSTextAttachment  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSTextAttachment  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSTextAttachment  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end