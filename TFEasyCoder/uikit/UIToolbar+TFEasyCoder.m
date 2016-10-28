//
//  UIToolbar+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIToolbar+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIToolbar (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIToolbar, UIToolbar *);
TF_EC_MINSTANCE_IMP(UIToolbar, UIToolbar *);


TF_EC_CHAIN_PROP_IMP(UIToolbar ,long long,barStyle)
TF_EC_CHAIN_PROP_IMP(UIToolbar ,NSArray *,items)
TF_EC_CHAIN_PROP_IMP(UIToolbar ,BOOL,translucent)
TF_EC_CHAIN_PROP_IMP(UIToolbar ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UIToolbar ,UIColor *,barTintColor)
TF_EC_CHAIN_PROP_IMP(UIToolbar ,id<UIToolbarDelegate>  ,delegate)



@end