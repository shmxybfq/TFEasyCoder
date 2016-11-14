//
//  NSConstantString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSConstantStringEasyCoderBlock) (NSConstantString * ins);

@interface NSConstantString (TFEasyCoder)

+( NSConstantString *)easyCoder:(NSConstantStringEasyCoderBlock)block;
-(NSConstantString *)easyCoder:(NSConstantStringEasyCoderBlock)block;






//superclass pros NSSimpleCString
//superclass pros NSString
//superclass pros NSObject
-(NSConstantString  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSConstantString  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSConstantString  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSConstantString  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSConstantString  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSConstantString  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSConstantString  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSConstantString  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSConstantString  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSConstantString  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSConstantString  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSConstantString  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSConstantString  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSConstantString  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSConstantString *(^)(id value,NSString *key))set_ValueKey;


@end