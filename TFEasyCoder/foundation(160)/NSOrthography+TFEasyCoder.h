//
//  NSOrthography+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSOrthography (TFEasyCoder)









//superclass pros NSObject
-(NSOrthography  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSOrthography  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSOrthography  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSOrthography  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSOrthography  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSOrthography  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSOrthography  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSOrthography  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSOrthography  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSOrthography  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSOrthography  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSOrthography  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSOrthography  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSOrthography  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end