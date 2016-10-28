//
//  UIStackView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIStackView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIStackView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIStackView, UIStackView *);
TF_EC_MINSTANCE_IMP(UIStackView, UIStackView *);


TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,axis)
TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,distribution)
TF_EC_CHAIN_PROP_IMP(UIStackView ,long long,alignment)
TF_EC_CHAIN_PROP_IMP(UIStackView ,double,spacing)

@end