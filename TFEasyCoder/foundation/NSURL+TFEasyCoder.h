//
//  NSURL+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSURL (TFEasyCoder)









//superclass pros NSObject
-(NSURL  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSURL  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSURL  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSURL  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSURL  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSURL  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSURL  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSURL  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSURL  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSURL  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSURL  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSURL  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSURL  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSURL  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end