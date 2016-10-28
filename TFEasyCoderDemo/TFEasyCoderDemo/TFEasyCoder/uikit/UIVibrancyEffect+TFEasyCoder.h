//
//  UIVibrancyEffect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIVibrancyEffect,UIVibrancyEffect *);

@interface UIVibrancyEffect (TFEasyCoder)

TF_EC_MSTATIC_INT(UIVibrancyEffect, UIVibrancyEffect *);
TF_EC_MINSTANCE_INT(UIVibrancyEffect,UIVibrancyEffect *);



@end