//
//  UIFocusGuide+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIFocusGuide+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIFocusGuide (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIFocusGuide, UIFocusGuide *);
TF_EC_MINSTANCE_IMP(UIFocusGuide, UIFocusGuide *);


TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIFocusGuide ,UIView *,preferredFocusedView)

@end