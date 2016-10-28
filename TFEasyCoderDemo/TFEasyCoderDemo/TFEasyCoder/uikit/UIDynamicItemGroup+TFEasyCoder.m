//
//  UIDynamicItemGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDynamicItemGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDynamicItemGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDynamicItemGroup, UIDynamicItemGroup *);
TF_EC_MINSTANCE_IMP(UIDynamicItemGroup, UIDynamicItemGroup *);


TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIDynamicItemGroup ,CGAffineTransform,transform)

@end