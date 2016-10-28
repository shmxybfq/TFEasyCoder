//
//  CAReplicatorLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAReplicatorLayer,CAReplicatorLayer *);

@interface CAReplicatorLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CAReplicatorLayer, CAReplicatorLayer *);
TF_EC_MINSTANCE_INT(CAReplicatorLayer,CAReplicatorLayer *);


TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,long long,instanceCount);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,BOOL,preservesDepth);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,double,instanceDelay);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CATransform3D,instanceTransform);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,CGColorRef,instanceColor);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceRedOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceGreenOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceBlueOffset);
TF_EC_CHAIN_PROP_INT(CAReplicatorLayer ,float,instanceAlphaOffset);

@end