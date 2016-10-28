//
//  CATransition+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CATransition+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CATransition (TFEasyCoder)

TF_EC_MSTATIC_IMP(CATransition, CATransition *);
TF_EC_MINSTANCE_IMP(CATransition, CATransition *);


TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,type)
TF_EC_CHAIN_PROP_IMP(CATransition ,NSString *,subtype)
TF_EC_CHAIN_PROP_IMP(CATransition ,float,startProgress)
TF_EC_CHAIN_PROP_IMP(CATransition ,float,endProgress)

@end