//
//  UIStepper+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIStepper,UIStepper *);

@interface UIStepper (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStepper, UIStepper *);
TF_EC_MINSTANCE_INT(UIStepper,UIStepper *);


TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,continuous);
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,autorepeat);
TF_EC_CHAIN_PROP_INT(UIStepper ,BOOL,wraps);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,value);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,minimumValue);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,maximumValue);
TF_EC_CHAIN_PROP_INT(UIStepper ,double,stepValue);
TF_EC_CHAIN_PROP_INT(UIStepper ,UIColor *,tintColor);

@end