//
//  UICollisionBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollisionBehavior,UICollisionBehavior *);

@interface UICollisionBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollisionBehavior, UICollisionBehavior *);
TF_EC_MINSTANCE_INT(UICollisionBehavior,UICollisionBehavior *);


TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,unsigned long long,collisionMode);
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,BOOL,translatesReferenceBoundsIntoBoundary);
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,id<UICollisionBehaviorDelegate> ,collisionDelegate);

@end