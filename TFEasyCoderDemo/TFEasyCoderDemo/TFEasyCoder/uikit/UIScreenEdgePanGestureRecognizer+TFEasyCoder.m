//
//  UIScreenEdgePanGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIScreenEdgePanGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIScreenEdgePanGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIScreenEdgePanGestureRecognizer ,unsigned long long,edges)

@end