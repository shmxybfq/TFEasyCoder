//
//  UIImage+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIImage (TFEasyCoder)









//superclass pros NSObject
-(UIImage  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIImage  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIImage  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIImage  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIImage  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIImage  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIImage  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIImage  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIImage  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIImage  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIImage  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIImage  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIImage  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIImage  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end