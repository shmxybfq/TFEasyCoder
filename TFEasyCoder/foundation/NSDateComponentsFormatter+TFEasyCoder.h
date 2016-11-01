//
//  NSDateComponentsFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDateComponentsFormatter,NSDateComponentsFormatter *);

@interface NSDateComponentsFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDateComponentsFormatter, NSDateComponentsFormatter *);
TF_EC_MINSTANCE_INT(NSDateComponentsFormatter,NSDateComponentsFormatter *);


TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,long long,unitsStyle);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,unsigned long long,allowedUnits);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,unsigned long long,zeroFormattingBehavior);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,NSCalendar *,calendar);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,allowsFractionalUnits);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,long long,maximumUnitCount);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,collapsesLargestUnit);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,includesApproximationPhrase);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,includesTimeRemainingPhrase);
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,long long,formattingContext);




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDateComponentsFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSDateComponentsFormatter);


@end