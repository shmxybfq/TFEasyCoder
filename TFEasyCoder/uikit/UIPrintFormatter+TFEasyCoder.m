//
//  UIPrintFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrintFormatter, UIPrintFormatter *);
TF_EC_MINSTANCE_IMP(UIPrintFormatter, UIPrintFormatter *);


TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,double,maximumContentHeight)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,double,maximumContentWidth)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,UIEdgeInsets,contentInsets)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,UIEdgeInsets,perPageContentInsets)
TF_EC_CHAIN_PROP_IMP(UIPrintFormatter ,long long,startPage)

@end