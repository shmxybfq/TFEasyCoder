//
//  UITextChecker+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UITextCheckerEasyCoderBlock) (UITextChecker * ins);

@interface UITextChecker (TFEasyCoder)

+( UITextChecker *)easyCoder:(UITextCheckerEasyCoderBlock)block;
-(UITextChecker *)easyCoder:(UITextCheckerEasyCoderBlock)block;






//superclass pros NSObject
-(UITextChecker  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextChecker  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextChecker  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextChecker  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextChecker  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextChecker  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextChecker  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextChecker  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextChecker  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextChecker  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextChecker  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextChecker  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextChecker  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextChecker  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UITextChecker *(^)(id value,NSString *key))set_ValueKey;


@end