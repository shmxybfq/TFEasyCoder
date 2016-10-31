//
//  CAEmitterBehavior+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAEmitterBehavior,CAEmitterBehavior *);

@interface CAEmitterBehavior (TFEasyCoder)

TF_EC_MSTATIC_INT(CAEmitterBehavior, CAEmitterBehavior *);
TF_EC_MINSTANCE_INT(CAEmitterBehavior,CAEmitterBehavior *);


TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSString *,name);
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,BOOL,enabled);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAEmitterBehavior ,long long,accessibilityNavigationStyle)





@end