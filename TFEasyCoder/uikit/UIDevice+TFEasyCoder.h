//
//  UIDevice+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDevice,UIDevice *);

@interface UIDevice (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDevice, UIDevice *);
TF_EC_MINSTANCE_INT(UIDevice,UIDevice *);


TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,batteryMonitoringEnabled);
TF_EC_CHAIN_PROP_INT(UIDevice ,BOOL,proximityMonitoringEnabled);

@end