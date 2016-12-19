//
//  NSMassFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSMassFormatter (TFEasyCoder)





-(NSMassFormatter  *(^)(NSNumberFormatter *  numberFormatter))set_numberFormatter;
-(NSMassFormatter  *(^)(long long  unitStyle))set_unitStyle;
-(NSMassFormatter  *(^)(BOOL  forPersonMassUse))set_forPersonMassUse;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSMassFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSMassFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSMassFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSMassFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSMassFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSMassFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSMassFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSMassFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSMassFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSMassFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSMassFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSMassFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSMassFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSMassFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end