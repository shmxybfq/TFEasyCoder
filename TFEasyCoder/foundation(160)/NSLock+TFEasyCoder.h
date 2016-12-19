//
//  NSLock+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLock (TFEasyCoder)





-(NSLock  *(^)(NSString *  name))set_name;




//superclass pros NSObject
-(NSLock  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLock  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLock  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLock  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLock  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLock  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLock  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLock  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLock  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLock  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLock  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLock  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLock  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLock  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end