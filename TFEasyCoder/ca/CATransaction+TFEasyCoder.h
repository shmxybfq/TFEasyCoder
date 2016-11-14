//
//  CATransaction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^CATransactionEasyCoderBlock) (CATransaction * ins);

@interface CATransaction (TFEasyCoder)

+( CATransaction *)easyCoder:(CATransactionEasyCoderBlock)block;
-(CATransaction *)easyCoder:(CATransactionEasyCoderBlock)block;






//superclass pros NSObject
-(CATransaction  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(CATransaction  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(CATransaction  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(CATransaction  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(CATransaction  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(CATransaction  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(CATransaction  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(CATransaction  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(CATransaction  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(CATransaction  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(CATransaction  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(CATransaction  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(CATransaction  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(CATransaction  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(CATransaction *(^)(id value,NSString *key))set_ValueKey;


@end