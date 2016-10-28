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

@end