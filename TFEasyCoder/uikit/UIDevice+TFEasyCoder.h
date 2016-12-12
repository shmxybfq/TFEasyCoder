//
//  UIDevice+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIDevice (TFEasyCoder)





-(UIDevice  *(^)(BOOL  batteryMonitoringEnabled))set_batteryMonitoringEnabled;
-(UIDevice  *(^)(BOOL  proximityMonitoringEnabled))set_proximityMonitoringEnabled;




//superclass pros NSObject
-(UIDevice  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIDevice  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIDevice  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIDevice  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIDevice  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIDevice  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIDevice  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIDevice  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIDevice  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIDevice  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIDevice  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIDevice  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIDevice  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIDevice  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end