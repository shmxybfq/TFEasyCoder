//
//  NSLayoutAnchor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSLayoutAnchor (TFEasyCoder)









//superclass pros NSObject
-(NSLayoutAnchor  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSLayoutAnchor  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSLayoutAnchor  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSLayoutAnchor  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSLayoutAnchor  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSLayoutAnchor  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSLayoutAnchor  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSLayoutAnchor  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSLayoutAnchor  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSLayoutAnchor  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSLayoutAnchor  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSLayoutAnchor  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSLayoutAnchor  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSLayoutAnchor  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end