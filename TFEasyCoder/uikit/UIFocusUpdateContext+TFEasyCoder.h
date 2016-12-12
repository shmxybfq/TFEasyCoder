//
//  UIFocusUpdateContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIFocusUpdateContext (TFEasyCoder)









//superclass pros NSObject
-(UIFocusUpdateContext  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIFocusUpdateContext  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIFocusUpdateContext  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIFocusUpdateContext  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIFocusUpdateContext  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIFocusUpdateContext  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIFocusUpdateContext  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIFocusUpdateContext  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIFocusUpdateContext  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIFocusUpdateContext  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIFocusUpdateContext  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIFocusUpdateContext  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIFocusUpdateContext  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIFocusUpdateContext  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end