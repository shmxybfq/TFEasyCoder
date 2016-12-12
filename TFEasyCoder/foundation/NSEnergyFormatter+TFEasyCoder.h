//
//  NSEnergyFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSEnergyFormatter (TFEasyCoder)





-(NSEnergyFormatter  *(^)(NSNumberFormatter *  numberFormatter))set_numberFormatter;
-(NSEnergyFormatter  *(^)(long long  unitStyle))set_unitStyle;
-(NSEnergyFormatter  *(^)(BOOL  forFoodEnergyUse))set_forFoodEnergyUse;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSEnergyFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSEnergyFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSEnergyFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSEnergyFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSEnergyFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSEnergyFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSEnergyFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSEnergyFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSEnergyFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSEnergyFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSEnergyFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSEnergyFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSEnergyFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSEnergyFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end