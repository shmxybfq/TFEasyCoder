//
//  NSTimer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSTimerEasyCoderBlock) (NSTimer * ins);

@interface NSTimer (TFEasyCoder)

+( NSTimer *)easyCoder:(NSTimerEasyCoderBlock)block;
-(NSTimer *)easyCoder:(NSTimerEasyCoderBlock)block;


-(NSTimer  *(^)(NSDate *  fireDate))set_fireDate;
-(NSTimer  *(^)(double  tolerance))set_tolerance;




//superclass pros NSObject
-(NSTimer  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSTimer  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSTimer  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSTimer  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSTimer  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSTimer  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSTimer  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSTimer  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSTimer  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSTimer  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSTimer  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSTimer  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSTimer  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSTimer  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSTimer *(^)(id value,NSString *key))set_ValueKey;


@end