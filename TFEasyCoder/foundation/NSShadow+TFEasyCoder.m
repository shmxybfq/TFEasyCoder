//
//  NSShadow+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSShadow+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSShadow (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSShadow, NSShadow *);
TF_EC_MINSTANCE_IMP(NSShadow, NSShadow *);


TF_EC_CHAIN_PROP_IMP(NSShadow ,CGSize,shadowOffset)

@end