//
//  NSPort+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPort (TFEasyCoder)









//superclass pros NSObject
-(NSPort  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPort  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPort  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPort  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPort  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPort  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPort  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPort  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPort  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPort  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPort  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPort  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPort  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPort  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end