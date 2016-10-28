//
//  UIInputViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIInputViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIInputViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIInputViewController, UIInputViewController *);
TF_EC_MINSTANCE_IMP(UIInputViewController, UIInputViewController *);


TF_EC_CHAIN_PROP_IMP(UIInputViewController ,UIInputView *,inputView)
TF_EC_CHAIN_PROP_IMP(UIInputViewController ,NSString *,primaryLanguage)

@end