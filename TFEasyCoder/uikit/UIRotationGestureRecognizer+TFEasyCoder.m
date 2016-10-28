//
//  UIRotationGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIRotationGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIRotationGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIRotationGestureRecognizer, UIRotationGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIRotationGestureRecognizer, UIRotationGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIRotationGestureRecognizer ,double,rotation)

@end