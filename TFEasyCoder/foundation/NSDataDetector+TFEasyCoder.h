//
//  NSDataDetector+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^NSDataDetectorEasyCoderBlock) (NSDataDetector * ins);

@interface NSDataDetector (TFEasyCoder)

+( NSDataDetector *)easyCoder:(NSDataDetectorEasyCoderBlock)block;
-(NSDataDetector *)easyCoder:(NSDataDetectorEasyCoderBlock)block;






//superclass pros NSRegularExpression
//superclass pros NSObject
-(NSDataDetector  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDataDetector  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDataDetector  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDataDetector  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDataDetector  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDataDetector  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDataDetector  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDataDetector  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDataDetector  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDataDetector  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDataDetector  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDataDetector  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDataDetector  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDataDetector  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(NSDataDetector *(^)(id value,NSString *key))set_ValueKey;


@end