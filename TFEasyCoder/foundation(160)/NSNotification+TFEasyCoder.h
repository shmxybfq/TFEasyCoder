//
//  NSNotification+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSNotification (TFEasyCoder)









//superclass pros NSObject
-(NSNotification  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSNotification  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSNotification  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSNotification  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSNotification  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSNotification  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSNotification  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSNotification  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSNotification  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSNotification  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSNotification  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSNotification  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSNotification  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSNotification  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end