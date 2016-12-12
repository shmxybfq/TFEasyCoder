//
//  NSFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSFormatter (TFEasyCoder)









//superclass pros NSObject
-(NSFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end