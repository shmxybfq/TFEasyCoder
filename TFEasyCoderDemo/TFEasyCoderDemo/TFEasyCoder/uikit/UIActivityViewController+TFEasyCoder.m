//
//  UIActivityViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIActivityViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIActivityViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIActivityViewController, UIActivityViewController *);
TF_EC_MINSTANCE_IMP(UIActivityViewController, UIActivityViewController *);


TF_EC_CHAIN_PROP_IMP(UIActivityViewController ,NSArray *,excludedActivityTypes)


@end