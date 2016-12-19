//
//  UIResponder+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIResponder (TFEasyCoder)





-(UIResponder  *(^)(NSUserActivity *  userActivity))set_userActivity;





//superclass pros NSObject
-(UIResponder  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIResponder  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIResponder  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIResponder  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIResponder  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIResponder  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIResponder  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIResponder  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIResponder  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIResponder  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIResponder  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIResponder  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIResponder  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIResponder  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end