//
//  UIAccelerometer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

TF_EC_BLOCK(UIAccelerometer,UIAccelerometer *);

@interface UIAccelerometer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAccelerometer, UIAccelerometer *);
TF_EC_MINSTANCE_INT(UIAccelerometer,UIAccelerometer *);


TF_EC_CHAIN_PROP_INT(UIAccelerometer ,double,updateInterval);
TF_EC_CHAIN_PROP_INT(UIAccelerometer ,id<UIAccelerometerDelegate> ,delegate);

@end