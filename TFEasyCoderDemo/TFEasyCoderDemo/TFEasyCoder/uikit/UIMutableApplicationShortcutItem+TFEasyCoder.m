//
//  UIMutableApplicationShortcutItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMutableApplicationShortcutItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMutableApplicationShortcutItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMutableApplicationShortcutItem, UIMutableApplicationShortcutItem *);
TF_EC_MINSTANCE_IMP(UIMutableApplicationShortcutItem, UIMutableApplicationShortcutItem *);


TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,type)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,localizedTitle)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSString *,localizedSubtitle)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,UIApplicationShortcutIcon *,icon)
TF_EC_CHAIN_PROP_IMP(UIMutableApplicationShortcutItem ,NSDictionary *,userInfo)


@end