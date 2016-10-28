//
//  NSEnergyFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSEnergyFormatter,NSEnergyFormatter *);

@interface NSEnergyFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSEnergyFormatter, NSEnergyFormatter *);
TF_EC_MINSTANCE_INT(NSEnergyFormatter,NSEnergyFormatter *);


TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,NSNumberFormatter *,numberFormatter);
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,long long,unitStyle);
TF_EC_CHAIN_PROP_INT(NSEnergyFormatter ,BOOL,forFoodEnergyUse);

@end