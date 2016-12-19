//
//  UIAlertAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIAlertAction (TFEasyCoder)




-(UIAlertAction  *(^)(BOOL  enabled))set_enabled;





//superclass pros NSObject
-(UIAlertAction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAlertAction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIAlertAction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAlertAction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAlertAction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAlertAction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAlertAction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAlertAction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAlertAction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAlertAction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAlertAction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAlertAction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAlertAction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAlertAction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end