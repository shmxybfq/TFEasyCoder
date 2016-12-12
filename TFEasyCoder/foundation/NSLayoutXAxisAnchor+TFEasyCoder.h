//
//  NSLayoutXAxisAnchor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLayoutXAxisAnchor (TFEasyCoder)









//superclass pros NSLayoutAnchor
//superclass pros NSObject
-(NSLayoutXAxisAnchor  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLayoutXAxisAnchor  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLayoutXAxisAnchor  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLayoutXAxisAnchor  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLayoutXAxisAnchor  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLayoutXAxisAnchor  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLayoutXAxisAnchor  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLayoutXAxisAnchor  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLayoutXAxisAnchor  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLayoutXAxisAnchor  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLayoutXAxisAnchor  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLayoutXAxisAnchor  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLayoutXAxisAnchor  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLayoutXAxisAnchor  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end