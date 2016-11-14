//
//  UIStoryboardPopoverSegue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


typedef void(^UIStoryboardPopoverSegueEasyCoderBlock) (UIStoryboardPopoverSegue * ins);

@interface UIStoryboardPopoverSegue (TFEasyCoder)

+( UIStoryboardPopoverSegue *)easyCoder:(UIStoryboardPopoverSegueEasyCoderBlock)block;
-(UIStoryboardPopoverSegue *)easyCoder:(UIStoryboardPopoverSegueEasyCoderBlock)block;






//superclass pros UIStoryboardSegue
//superclass pros NSObject
-(UIStoryboardPopoverSegue  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIStoryboardPopoverSegue  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIStoryboardPopoverSegue  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIStoryboardPopoverSegue  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIStoryboardPopoverSegue  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIStoryboardPopoverSegue  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIStoryboardPopoverSegue  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIStoryboardPopoverSegue  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIStoryboardPopoverSegue  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIStoryboardPopoverSegue  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIStoryboardPopoverSegue  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIStoryboardPopoverSegue  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIStoryboardPopoverSegue  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIStoryboardPopoverSegue  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UIStoryboardPopoverSegue *(^)(id value,NSString *key))set_ValueKey;


@end
