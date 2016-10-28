//
//  UIPrintPageRenderer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintPageRenderer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrintPageRenderer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrintPageRenderer, UIPrintPageRenderer *);
TF_EC_MINSTANCE_IMP(UIPrintPageRenderer, UIPrintPageRenderer *);


TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,double,headerHeight)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,double,footerHeight)
TF_EC_CHAIN_PROP_IMP(UIPrintPageRenderer ,NSArray *,printFormatters)

@end