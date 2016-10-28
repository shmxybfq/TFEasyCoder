//
//  NSStringDrawingContext+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSStringDrawingContext+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSStringDrawingContext (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSStringDrawingContext, NSStringDrawingContext *);
TF_EC_MINSTANCE_IMP(NSStringDrawingContext, NSStringDrawingContext *);


TF_EC_CHAIN_PROP_IMP(NSStringDrawingContext ,double,minimumTrackingAdjustment)
TF_EC_CHAIN_PROP_IMP(NSStringDrawingContext ,double,minimumScaleFactor)


@end