//
//  UIPushBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPushBehavior,UIPushBehavior *);

@interface UIPushBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPushBehavior, UIPushBehavior *);
TF_EC_MINSTANCE_INT(UIPushBehavior,UIPushBehavior *);


TF_EC_CHAIN_PROP_INT(UIPushBehavior ,BOOL,active);
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,double,angle);
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,double,magnitude);
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,CGVector,pushDirection);

@end