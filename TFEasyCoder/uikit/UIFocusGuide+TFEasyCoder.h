//
//  UIFocusGuide+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIFocusGuide (TFEasyCoder)





-(UIFocusGuide  *(^)(BOOL  enabled))set_enabled;
-(UIFocusGuide  *(^)(UIView *  preferredFocusedView))set_preferredFocusedView;




//superclass pros UILayoutGuide
-(UIFocusGuide  *(^)(UIView *  owningView))set_owningView;
-(UIFocusGuide  *(^)(NSString *  identifier))set_identifier;
//superclass pros NSObject
-(UIFocusGuide  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIFocusGuide  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIFocusGuide  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIFocusGuide  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIFocusGuide  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIFocusGuide  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIFocusGuide  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIFocusGuide  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIFocusGuide  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIFocusGuide  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIFocusGuide  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIFocusGuide  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIFocusGuide  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIFocusGuide  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end