//
//  UILongPressGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILongPressGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILongPressGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILongPressGestureRecognizer, UILongPressGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UILongPressGestureRecognizer, UILongPressGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,unsigned long long,numberOfTapsRequired)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,double,minimumPressDuration)
TF_EC_CHAIN_PROP_IMP(UILongPressGestureRecognizer ,double,allowableMovement)


@end