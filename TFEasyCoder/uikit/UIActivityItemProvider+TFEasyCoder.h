//
//  UIActivityItemProvider+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIActivityItemProvider (TFEasyCoder)









//superclass pros NSOperation
-(UIActivityItemProvider  *(^)(long long  queuePriority))set_queuePriority;
-(UIActivityItemProvider  *(^)(double  threadPriority))set_threadPriority;
-(UIActivityItemProvider  *(^)(long long  qualityOfService))set_qualityOfService;
-(UIActivityItemProvider  *(^)(NSString *  name))set_name;
//superclass pros NSObject
-(UIActivityItemProvider  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIActivityItemProvider  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIActivityItemProvider  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIActivityItemProvider  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIActivityItemProvider  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIActivityItemProvider  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIActivityItemProvider  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIActivityItemProvider  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIActivityItemProvider  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIActivityItemProvider  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIActivityItemProvider  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIActivityItemProvider  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIActivityItemProvider  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIActivityItemProvider  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end