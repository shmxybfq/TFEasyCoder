//
//  UIPinchGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPinchGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPinchGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPinchGestureRecognizer, UIPinchGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UIPinchGestureRecognizer, UIPinchGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UIPinchGestureRecognizer ,double,scale)


@end