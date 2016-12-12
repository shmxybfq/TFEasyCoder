//
//  NSUserDefaults+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSUserDefaults (TFEasyCoder)









//superclass pros NSObject
-(NSUserDefaults  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSUserDefaults  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSUserDefaults  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSUserDefaults  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSUserDefaults  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSUserDefaults  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSUserDefaults  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSUserDefaults  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSUserDefaults  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSUserDefaults  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSUserDefaults  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSUserDefaults  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSUserDefaults  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSUserDefaults  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end