//
//  UIFieldBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFieldBehavior,UIFieldBehavior *);

@interface UIFieldBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFieldBehavior, UIFieldBehavior *);
TF_EC_MINSTANCE_INT(UIFieldBehavior,UIFieldBehavior *);


TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,CGPoint,position);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,strength);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,falloff);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,minimumRadius);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,CGVector,direction);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,smoothness);
TF_EC_CHAIN_PROP_INT(UIFieldBehavior ,double,animationSpeed);

@end