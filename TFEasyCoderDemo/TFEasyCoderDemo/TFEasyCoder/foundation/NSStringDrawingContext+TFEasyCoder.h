//
//  NSStringDrawingContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSStringDrawingContext,NSStringDrawingContext *);

@interface NSStringDrawingContext (TFEasyCoder)

TF_EC_MSTATIC_INT(NSStringDrawingContext, NSStringDrawingContext *);
TF_EC_MINSTANCE_INT(NSStringDrawingContext,NSStringDrawingContext *);

TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,double,minimumTrackingAdjustment)
TF_EC_CHAIN_PROP_INT(NSStringDrawingContext ,double,minimumScaleFactor)

@end