//
//  UIColor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UIColorEasyCoderBlock) (UIColor * ins);

@interface UIColor (TFEasyCoder)

+( UIColor *)easyCoder:(UIColorEasyCoderBlock)block;
-(UIColor *)easyCoder:(UIColorEasyCoderBlock)block;





//superclass pros NSObject
-(UIColor  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIColor  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIColor  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIColor  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIColor  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIColor  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIColor  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIColor  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIColor  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIColor  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIColor  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIColor  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIColor  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIColor  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIColor *(^)(id value,NSString *key))set_ValueKey;


@end