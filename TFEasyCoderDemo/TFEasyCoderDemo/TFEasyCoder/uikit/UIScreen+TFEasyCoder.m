//
//  UIScreen+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIScreen+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIScreen (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIScreen, UIScreen *);
TF_EC_MINSTANCE_IMP(UIScreen, UIScreen *);


TF_EC_CHAIN_PROP_IMP(UIScreen ,UIScreenMode *,currentMode)
TF_EC_CHAIN_PROP_IMP(UIScreen ,long long,overscanCompensation)
TF_EC_CHAIN_PROP_IMP(UIScreen ,double,brightness)
TF_EC_CHAIN_PROP_IMP(UIScreen ,BOOL,wantsSoftwareDimming)

@end