//
//  NSCalendar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCalendar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCalendar (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCalendar, NSCalendar *);
TF_EC_MINSTANCE_IMP(NSCalendar, NSCalendar *);


TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSLocale *,locale)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSTimeZone *,timeZone)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,unsigned long long,firstWeekday)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,unsigned long long,minimumDaysInFirstWeek)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCalendar ,long long,accessibilityNavigationStyle)





@end