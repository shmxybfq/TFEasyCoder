//
//  NSKeyedArchiver+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSKeyedArchiver (TFEasyCoder)





-(NSKeyedArchiver  *(^)(id<NSKeyedArchiverDelegate>   delegate))set_delegate;
-(NSKeyedArchiver  *(^)(unsigned long long  outputFormat))set_outputFormat;
-(NSKeyedArchiver  *(^)(BOOL  requiresSecureCoding))set_requiresSecureCoding;




//superclass pros NSCoder
//superclass pros NSObject
-(NSKeyedArchiver  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSKeyedArchiver  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSKeyedArchiver  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSKeyedArchiver  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSKeyedArchiver  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSKeyedArchiver  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSKeyedArchiver  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSKeyedArchiver  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSKeyedArchiver  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSKeyedArchiver  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSKeyedArchiver  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSKeyedArchiver  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSKeyedArchiver  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSKeyedArchiver  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end