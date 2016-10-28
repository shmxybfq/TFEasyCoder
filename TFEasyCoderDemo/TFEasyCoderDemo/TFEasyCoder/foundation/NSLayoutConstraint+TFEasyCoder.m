//
//  NSLayoutConstraint+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLayoutConstraint+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLayoutConstraint (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLayoutConstraint, NSLayoutConstraint *);
TF_EC_MINSTANCE_IMP(NSLayoutConstraint, NSLayoutConstraint *);


TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,float,priority)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,shouldBeArchived)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,double,constant)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,BOOL,active)
TF_EC_CHAIN_PROP_IMP(NSLayoutConstraint ,NSString *,identifier)

@end