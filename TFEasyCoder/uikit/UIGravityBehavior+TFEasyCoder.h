//
//  UIGravityBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIGravityBehavior,UIGravityBehavior *);

@interface UIGravityBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UIGravityBehavior, UIGravityBehavior *);
TF_EC_MINSTANCE_INT(UIGravityBehavior,UIGravityBehavior *);


TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,CGVector,gravityDirection);
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,double,angle);
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,double,magnitude);

@end