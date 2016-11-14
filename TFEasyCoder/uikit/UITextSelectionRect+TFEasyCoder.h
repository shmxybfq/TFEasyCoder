//
//  UITextSelectionRect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

typedef void(^UITextSelectionRectEasyCoderBlock) (UITextSelectionRect * ins);

@interface UITextSelectionRect (TFEasyCoder)

+( UITextSelectionRect *)easyCoder:(UITextSelectionRectEasyCoderBlock)block;
-(UITextSelectionRect *)easyCoder:(UITextSelectionRectEasyCoderBlock)block;






//superclass pros NSObject
-(UITextSelectionRect  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITextSelectionRect  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITextSelectionRect  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITextSelectionRect  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITextSelectionRect  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITextSelectionRect  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITextSelectionRect  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITextSelectionRect  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITextSelectionRect  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITextSelectionRect  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITextSelectionRect  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITextSelectionRect  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITextSelectionRect  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITextSelectionRect  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;





-(UITextSelectionRect *(^)(id value,NSString *key))set_ValueKey;


@end