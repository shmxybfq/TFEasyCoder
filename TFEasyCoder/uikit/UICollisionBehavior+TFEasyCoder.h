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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollisionBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UICollisionBehavior);


@end