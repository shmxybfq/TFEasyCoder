//
//  NSDateComponentsFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSDateComponentsFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSDateComponentsFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSDateComponentsFormatter, NSDateComponentsFormatter *);
TF_EC_MINSTANCE_IMP(NSDateComponentsFormatter, NSDateComponentsFormatter *);


TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,long long,unitsStyle)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,unsigned long long,allowedUnits)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,unsigned long long,zeroFormattingBehavior)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,NSCalendar *,calendar)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,allowsFractionalUnits)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,long long,maximumUnitCount)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,collapsesLargestUnit)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,includesApproximationPhrase)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,includesTimeRemainingPhrase)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,long long,formattingContext)




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSDateComponentsFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSDateComponentsFormatter);


@end