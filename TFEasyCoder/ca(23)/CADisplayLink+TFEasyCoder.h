//
//  CADisplayLink+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface CADisplayLink (TFEasyCoder)





-(CADisplayLink  *(^)(BOOL  paused))set_paused;
-(CADisplayLink  *(^)(long long  frameInterval))set_frameInterval;




//superclass pros NSObject
-(CADisplayLink  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CADisplayLink  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CADisplayLink  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CADisplayLink  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CADisplayLink  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CADisplayLink  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CADisplayLink  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CADisplayLink  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CADisplayLink  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CADisplayLink  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CADisplayLink  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CADisplayLink  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CADisplayLink  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CADisplayLink  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end