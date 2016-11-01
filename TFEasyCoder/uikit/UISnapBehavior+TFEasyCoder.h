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




//superclass pros UIDynamicBehavior
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISnapBehavior ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UISnapBehavior);


@end