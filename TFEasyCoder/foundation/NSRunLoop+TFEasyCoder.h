//
//  NSRunLoop+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSRunLoopEasyCoderBlock) (NSRunLoop * ins);

@interface NSRunLoop (TFEasyCoder)

+( NSRunLoop *)easyCoder:(NSRunLoopEasyCoderBlock)block;
-(NSRunLoop *)easyCoder:(NSRunLoopEasyCoderBlock)block;






//superclass pros NSObject
-(NSRunLoop  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSRunLoop  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSRunLoop  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSRunLoop  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSRunLoop  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSRunLoop  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSRunLoop  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSRunLoop  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSRunLoop  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSRunLoop  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSRunLoop  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSRunLoop  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSRunLoop  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSRunLoop  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSRunLoop *(^)(id value,NSString *key))set_ValueKey;


@end