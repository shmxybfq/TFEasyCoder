//
//  NSTextStorage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSTextStorage (TFEasyCoder)





-(NSTextStorage  *(^)(id<NSTextStorageDelegate>   delegate))set_delegate;




//superclass pros NSMutableAttributedString
//superclass pros NSAttributedString
//superclass pros NSObject
-(NSTextStorage  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSTextStorage  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSTextStorage  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSTextStorage  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSTextStorage  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSTextStorage  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSTextStorage  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSTextStorage  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSTextStorage  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSTextStorage  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSTextStorage  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSTextStorage  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSTextStorage  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSTextStorage  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end