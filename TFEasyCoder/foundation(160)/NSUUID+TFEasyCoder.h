//
//  NSUUID+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSUUID (TFEasyCoder)









//superclass pros NSObject
-(NSUUID  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSUUID  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSUUID  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSUUID  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSUUID  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSUUID  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSUUID  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSUUID  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSUUID  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSUUID  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSUUID  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSUUID  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSUUID  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSUUID  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end