//
//  CADisplayLink+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CADisplayLink,CADisplayLink *);

@interface CADisplayLink (TFEasyCoder)

TF_EC_MSTATIC_INT(CADisplayLink, CADisplayLink *);
TF_EC_MINSTANCE_INT(CADisplayLink,CADisplayLink *);


TF_EC_CHAIN_PROP_INT(CADisplayLink ,BOOL,paused);
TF_EC_CHAIN_PROP_INT(CADisplayLink ,long long,frameInterval);

@end