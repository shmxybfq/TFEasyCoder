//
//  NSURLSession+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLSession (TFEasyCoder)






-(NSURLSession  *(^)(NSString *  sessionDescription))set_sessionDescription;





//superclass pros NSObject
-(NSURLSession  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLSession  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLSession  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLSession  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLSession  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLSession  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLSession  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLSession  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLSession  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLSession  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLSession  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLSession  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLSession  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLSession  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end