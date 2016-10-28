//
//  CASpringAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CASpringAnimation,CASpringAnimation *);

@interface CASpringAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CASpringAnimation, CASpringAnimation *);
TF_EC_MINSTANCE_INT(CASpringAnimation,CASpringAnimation *);


TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,mass);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,stiffness);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,damping);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,initialVelocity);

@end