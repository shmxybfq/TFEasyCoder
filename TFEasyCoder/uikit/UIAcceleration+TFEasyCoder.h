//
//  UIAcceleration+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAcceleration,UIAcceleration *);

@interface UIAcceleration (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAcceleration, UIAcceleration *);
TF_EC_MINSTANCE_INT(UIAcceleration,UIAcceleration *);


TF_EC_CHAIN_PROP_INT(UIAcceleration ,double,timestamp);
TF_EC_CHAIN_PROP_INT(UIAcceleration ,double,x);
TF_EC_CHAIN_PROP_INT(UIAcceleration ,double,y);
TF_EC_CHAIN_PROP_INT(UIAcceleration ,double,z);

@end