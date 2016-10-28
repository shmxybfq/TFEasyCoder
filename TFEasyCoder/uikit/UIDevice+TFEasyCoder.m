//
//  UIDevice+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDevice+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDevice (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDevice, UIDevice *);
TF_EC_MINSTANCE_IMP(UIDevice, UIDevice *);


TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,batteryMonitoringEnabled)
TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,proximityMonitoringEnabled)

@end