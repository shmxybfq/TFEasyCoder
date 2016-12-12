//
//  NSURLResponse+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURLResponse (TFEasyCoder)









//superclass pros NSObject
-(NSURLResponse  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURLResponse  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURLResponse  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURLResponse  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURLResponse  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURLResponse  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURLResponse  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURLResponse  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURLResponse  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURLResponse  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURLResponse  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURLResponse  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURLResponse  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURLResponse  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end