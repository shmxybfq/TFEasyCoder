//
//  NSCalendar+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCalendar,NSCalendar *);

@interface NSCalendar (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCalendar, NSCalendar *);
TF_EC_MINSTANCE_INT(NSCalendar,NSCalendar *);


TF_EC_CHAIN_PROP_INT(NSCalendar ,NSLocale *,locale);
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSTimeZone *,timeZone);
TF_EC_CHAIN_PROP_INT(NSCalendar ,unsigned long long,firstWeekday);
TF_EC_CHAIN_PROP_INT(NSCalendar ,unsigned long long,minimumDaysInFirstWeek);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCalendar ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCalendar ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCalendar ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCalendar ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCalendar ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCalendar ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCalendar ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCalendar ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCalendar ,long long,accessibilityNavigationStyle)





@end