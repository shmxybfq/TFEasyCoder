//
//  UIPresentationController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPresentationController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPresentationController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPresentationController, UIPresentationController *);
TF_EC_MINSTANCE_IMP(UIPresentationController, UIPresentationController *);



TF_EC_CHAIN_PROP_IMP(UIPresentationController ,id<UIAdaptivePresentationControllerDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UIPresentationController ,UITraitCollection *,overrideTraitCollection)

@end