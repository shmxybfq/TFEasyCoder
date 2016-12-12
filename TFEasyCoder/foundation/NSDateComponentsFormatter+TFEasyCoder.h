//
//  NSDateComponentsFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface NSDateComponentsFormatter (TFEasyCoder)





-(NSDateComponentsFormatter  *(^)(long long  unitsStyle))set_unitsStyle;
-(NSDateComponentsFormatter  *(^)(unsigned long long  allowedUnits))set_allowedUnits;
-(NSDateComponentsFormatter  *(^)(unsigned long long  zeroFormattingBehavior))set_zeroFormattingBehavior;
-(NSDateComponentsFormatter  *(^)(NSCalendar *  calendar))set_calendar;
-(NSDateComponentsFormatter  *(^)(BOOL  allowsFractionalUnits))set_allowsFractionalUnits;
-(NSDateComponentsFormatter  *(^)(long long  maximumUnitCount))set_maximumUnitCount;
-(NSDateComponentsFormatter  *(^)(BOOL  collapsesLargestUnit))set_collapsesLargestUnit;
-(NSDateComponentsFormatter  *(^)(BOOL  includesApproximationPhrase))set_includesApproximationPhrase;
-(NSDateComponentsFormatter  *(^)(BOOL  includesTimeRemainingPhrase))set_includesTimeRemainingPhrase;
-(NSDateComponentsFormatter  *(^)(long long  formattingContext))set_formattingContext;




//superclass pros NSFormatter
//superclass pros NSObject
-(NSDateComponentsFormatter  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(NSDateComponentsFormatter  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(NSDateComponentsFormatter  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(NSDateComponentsFormatter  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(NSDateComponentsFormatter  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(NSDateComponentsFormatter  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(NSDateComponentsFormatter  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(NSDateComponentsFormatter  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(NSDateComponentsFormatter  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(NSDateComponentsFormatter  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(NSDateComponentsFormatter  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end