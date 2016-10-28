//
//  CATextLayer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATextLayer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATextLayer (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATextLayer, CATextLayer *);
TF_EC_MINSTANCE_IMP(CATextLayer, CATextLayer *);


TF_EC_CHAIN_PROP_IMP(CATextLayer ,CFTypeRef,font)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,double,fontSize)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,CGColorRef,foregroundColor)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,wrapped)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,truncationMode)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,NSString *,alignmentMode)
TF_EC_CHAIN_PROP_IMP(CATextLayer ,BOOL,allowsFontSubpixelQuantization)

@end