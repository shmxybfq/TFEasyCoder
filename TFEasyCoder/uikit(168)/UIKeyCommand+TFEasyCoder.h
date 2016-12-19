//
//  UIKeyCommand+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UIKeyCommand (TFEasyCoder)





-(UIKeyCommand  *(^)(NSString *  discoverabilityTitle))set_discoverabilityTitle;




//superclass pros NSObject
-(UIKeyCommand  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UIKeyCommand  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UIKeyCommand  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UIKeyCommand  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UIKeyCommand  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UIKeyCommand  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UIKeyCommand  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UIKeyCommand  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UIKeyCommand  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UIKeyCommand  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UIKeyCommand  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UIKeyCommand  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UIKeyCommand  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UIKeyCommand  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end