//
//  UISwitch+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISwitch+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISwitch (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISwitch, UISwitch *);
TF_EC_MINSTANCE_IMP(UISwitch, UISwitch *);


TF_EC_CHAIN_PROP_IMP(UISwitch ,UIColor *,onTintColor)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIColor *,tintColor)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIColor *,thumbTintColor)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIImage *,onImage)
TF_EC_CHAIN_PROP_IMP(UISwitch ,UIImage *,offImage)
TF_EC_CHAIN_PROP_IMP(UISwitch ,BOOL,on)


@end