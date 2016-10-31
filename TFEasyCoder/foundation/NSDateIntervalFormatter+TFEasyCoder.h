//
//  NSDateIntervalFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDateIntervalFormatter,NSDateIntervalFormatter *);

@interface NSDateIntervalFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDateIntervalFormatter, NSDateIntervalFormatter *);
TF_EC_MINSTANCE_INT(NSDateIntervalFormatter,NSDateIntervalFormatter *);


TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSLocale *,locale);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSCalendar *,calendar);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSTimeZone *,timeZone);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSString *,dateTemplate);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,unsigned long long,dateStyle);
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,unsigned long long,timeStyle);




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDateIntervalFormatter ,long long,accessibilityNavigationStyle)





@end