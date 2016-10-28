//
//  UIRotationGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIRotationGestureRecognizer,UIRotationGestureRecognizer *);

@interface UIRotationGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIRotationGestureRecognizer, UIRotationGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIRotationGestureRecognizer,UIRotationGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIRotationGestureRecognizer ,double,rotation);

@end