//
//  NSScanner+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSScanner (TFEasyCoder)





-(NSScanner  *(^)(unsigned long long  scanLocation))set_scanLocation;
-(NSScanner  *(^)(NSCharacterSet *  charactersToBeSkipped))set_charactersToBeSkipped;
-(NSScanner  *(^)(BOOL  caseSensitive))set_caseSensitive;




//superclass pros NSObject
-(NSScanner  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSScanner  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSScanner  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSScanner  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSScanner  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSScanner  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSScanner  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSScanner  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSScanner  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSScanner  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSScanner  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSScanner  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSScanner  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSScanner  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end