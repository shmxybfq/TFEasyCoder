//
//  UIPrintInfo+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrintInfo+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrintInfo (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrintInfo, UIPrintInfo *);
TF_EC_MINSTANCE_IMP(UIPrintInfo, UIPrintInfo *);


TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,printerID)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,NSString *,jobName)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,long long,outputType)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,long long,orientation)
TF_EC_CHAIN_PROP_IMP(UIPrintInfo ,long long,duplex)


@end