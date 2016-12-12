//
//  NSPersonNameComponentsFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSPersonNameComponentsFormatter (TFEasyCoder)





-(NSPersonNameComponentsFormatter  *(^)(long long  style))set_style;
-(NSPersonNameComponentsFormatter  *(^)(BOOL  phonetic))set_phonetic;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSPersonNameComponentsFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSPersonNameComponentsFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSPersonNameComponentsFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSPersonNameComponentsFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSPersonNameComponentsFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSPersonNameComponentsFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSPersonNameComponentsFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSPersonNameComponentsFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSPersonNameComponentsFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSPersonNameComponentsFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSPersonNameComponentsFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSPersonNameComponentsFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSPersonNameComponentsFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSPersonNameComponentsFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end