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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPushBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIPushBehavior);


@end