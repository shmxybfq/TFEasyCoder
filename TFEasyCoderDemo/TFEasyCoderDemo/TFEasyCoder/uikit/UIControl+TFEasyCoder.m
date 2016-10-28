//
//  UIControl+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIControl+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIControl (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIControl, UIControl *);
TF_EC_MINSTANCE_IMP(UIControl, UIControl *);


TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UIControl ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIControl ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UIControl ,long long,contentHorizontalAlignment)

@end