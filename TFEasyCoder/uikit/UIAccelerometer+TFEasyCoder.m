//
//  UIAccelerometer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAccelerometer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAccelerometer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAccelerometer, UIAccelerometer *);
TF_EC_MINSTANCE_IMP(UIAccelerometer, UIAccelerometer *);


TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,double,updateInterval)
TF_EC_CHAIN_PROP_IMP(UIAccelerometer ,id<UIAccelerometerDelegate>  ,delegate)

@end