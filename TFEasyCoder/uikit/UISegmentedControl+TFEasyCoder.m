//
//  UISegmentedControl+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISegmentedControl+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISegmentedControl (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISegmentedControl, UISegmentedControl *);
TF_EC_MINSTANCE_IMP(UISegmentedControl, UISegmentedControl *);


#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_CHAIN_PROP_IMP(UISegmentedControl ,long long,segmentedControlStyle)
TF_EC_CHAIN_PROP_IMP(UISegmentedControl ,BOOL,momentary)
TF_EC_CHAIN_PROP_IMP(UISegmentedControl ,BOOL,apportionsSegmentWidthsByContent)
TF_EC_CHAIN_PROP_IMP(UISegmentedControl ,long long,selectedSegmentIndex)
TF_EC_CHAIN_PROP_IMP(UISegmentedControl ,UIColor *,tintColor)

@end