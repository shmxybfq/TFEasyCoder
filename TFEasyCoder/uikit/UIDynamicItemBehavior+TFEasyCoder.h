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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDynamicItemBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIDynamicItemBehavior);


@end