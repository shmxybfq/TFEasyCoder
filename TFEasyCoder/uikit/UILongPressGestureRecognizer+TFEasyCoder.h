//
//  UILongPressGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILongPressGestureRecognizer,UILongPressGestureRecognizer *);

@interface UILongPressGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UILongPressGestureRecognizer, UILongPressGestureRecognizer *);
TF_EC_MINSTANCE_INT(UILongPressGestureRecognizer,UILongPressGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,unsigned long long,numberOfTapsRequired);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,double,minimumPressDuration);
TF_EC_CHAIN_PROP_INT(UILongPressGestureRecognizer ,double,allowableMovement);


@end