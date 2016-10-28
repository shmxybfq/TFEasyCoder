//
//  UIManagedDocument+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIManagedDocument+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIManagedDocument (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIManagedDocument, UIManagedDocument *);
TF_EC_MINSTANCE_IMP(UIManagedDocument, UIManagedDocument *);


TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSDictionary *,persistentStoreOptions)
TF_EC_CHAIN_PROP_IMP(UIManagedDocument ,NSString *,modelConfiguration)

@end