//
//  CAKeyframeAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAKeyframeAnimation,CAKeyframeAnimation *);

@interface CAKeyframeAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CAKeyframeAnimation, CAKeyframeAnimation *);
TF_EC_MINSTANCE_INT(CAKeyframeAnimation,CAKeyframeAnimation *);


TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,values);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,CGPathRef,path);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,keyTimes);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,timingFunctions);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,calculationMode);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,tensionValues);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,continuityValues);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSArray *,biasValues);
TF_EC_CHAIN_PROP_INT(CAKeyframeAnimation ,NSString *,rotationMode);

@end