//
//  UIActionSheet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActionSheet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIActionSheet (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActionSheet, UIActionSheet *);
TF_EC_MINSTANCE_IMP(UIActionSheet, UIActionSheet *);


TF_EC_CHAIN_PROP_IMP(UIActionSheet ,id<UIActionSheetDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,actionSheetStyle)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,cancelButtonIndex)
TF_EC_CHAIN_PROP_IMP(UIActionSheet ,long long,destructiveButtonIndex)

@end