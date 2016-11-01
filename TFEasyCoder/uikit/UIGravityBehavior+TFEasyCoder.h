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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIGravityBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIGravityBehavior);


@end