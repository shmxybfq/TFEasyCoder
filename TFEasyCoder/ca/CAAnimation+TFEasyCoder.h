//
//  CAAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAAnimation,CAAnimation *);

@interface CAAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CAAnimation, CAAnimation *);
TF_EC_MINSTANCE_INT(CAAnimation,CAAnimation *);



TF_EC_CHAIN_PROP_INT(CAAnimation ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,duration);
TF_EC_CHAIN_PROP_INT(CAAnimation ,float,speed);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAAnimation ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAAnimation ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSString *,fillMode);

@end