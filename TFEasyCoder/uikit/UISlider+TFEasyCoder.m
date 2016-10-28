//
//  UISlider+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISlider+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISlider (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISlider, UISlider *);
TF_EC_MINSTANCE_IMP(UISlider, UISlider *);


TF_EC_CHAIN_PROP_IMP(UISlider ,float,value)
TF_EC_CHAIN_PROP_IMP(UISlider ,float,minimumValue)
TF_EC_CHAIN_PROP_IMP(UISlider ,float,maximumValue)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIImage *,minimumValueImage)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIImage *,maximumValueImage)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,continuous)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIColor *,minimumTrackTintColor)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIColor *,maximumTrackTintColor)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIColor *,thumbTintColor)

@end