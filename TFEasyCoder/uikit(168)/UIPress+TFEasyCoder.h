//
//  UIPress+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIPress (TFEasyCoder)









//superclass pros NSObject
-(UIPress  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIPress  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIPress  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIPress  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIPress  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIPress  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIPress  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIPress  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIPress  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIPress  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIPress  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIPress  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIPress  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIPress  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end