//
//  UIDynamicItemBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDynamicItemBehavior,UIDynamicItemBehavior *);

@interface UIDynamicItemBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDynamicItemBehavior, UIDynamicItemBehavior *);
TF_EC_MINSTANCE_INT(UIDynamicItemBehavior,UIDynamicItemBehavior *);


TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,double,elasticity);
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,double,friction);
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,double,density);
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,double,resistance);
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,double,charge);
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,BOOL,anchored);

@end