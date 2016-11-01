//
//  UIDynamicBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDynamicBehavior,UIDynamicBehavior *);

@interface UIDynamicBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDynamicBehavior, UIDynamicBehavior *);
TF_EC_MINSTANCE_INT(UIDynamicBehavior,UIDynamicBehavior *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIDynamicBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIDynamicBehavior);


@end