//
//  UITapGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITapGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITapGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITapGestureRecognizer, UITapGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UITapGestureRecognizer, UITapGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,unsigned long long,numberOfTapsRequired)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,unsigned long long,numberOfTouchesRequired)

@end