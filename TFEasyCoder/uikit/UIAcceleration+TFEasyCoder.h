//
//  UIAcceleration+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"




@interface UIAcceleration (TFEasyCoder)





//superclass pros NSObject
-(UIAcceleration  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIAcceleration  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIAcceleration  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIAcceleration  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIAcceleration  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIAcceleration  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIAcceleration  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIAcceleration  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIAcceleration  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIAcceleration  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIAcceleration  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIAcceleration  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIAcceleration  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIAcceleration  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;







@end
