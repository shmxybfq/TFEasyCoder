//
//  UIStepper+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIStepper+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIStepper (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIStepper, UIStepper *);
TF_EC_MINSTANCE_IMP(UIStepper, UIStepper *);


TF_EC_CHAIN_PROP_IMP(UIStepper ,BOOL,continuous)
TF_EC_CHAIN_PROP_IMP(UIStepper ,BOOL,autorepeat)
TF_EC_CHAIN_PROP_IMP(UIStepper ,BOOL,wraps)
TF_EC_CHAIN_PROP_IMP(UIStepper ,double,value)
TF_EC_CHAIN_PROP_IMP(UIStepper ,double,minimumValue)
TF_EC_CHAIN_PROP_IMP(UIStepper ,double,maximumValue)
TF_EC_CHAIN_PROP_IMP(UIStepper ,double,stepValue)
TF_EC_CHAIN_PROP_IMP(UIStepper ,UIColor *,tintColor)

@end