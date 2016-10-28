//
//  UISnapBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISnapBehavior,UISnapBehavior *);

@interface UISnapBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UISnapBehavior, UISnapBehavior *);
TF_EC_MINSTANCE_INT(UISnapBehavior,UISnapBehavior *);


TF_EC_CHAIN_PROP_INT(UISnapBehavior ,CGPoint,snapPoint);
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,double,damping);

@end