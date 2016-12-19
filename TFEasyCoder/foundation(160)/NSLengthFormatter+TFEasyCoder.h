//
//  NSLengthFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLengthFormatter (TFEasyCoder)





-(NSLengthFormatter  *(^)(NSNumberFormatter *  numberFormatter))set_numberFormatter;
-(NSLengthFormatter  *(^)(long long  unitStyle))set_unitStyle;
-(NSLengthFormatter  *(^)(BOOL  forPersonHeightUse))set_forPersonHeightUse;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSLengthFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLengthFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLengthFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLengthFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLengthFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLengthFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLengthFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLengthFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLengthFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLengthFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLengthFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLengthFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLengthFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLengthFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end