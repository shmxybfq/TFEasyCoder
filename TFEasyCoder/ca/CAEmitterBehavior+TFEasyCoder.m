//
//  CAEmitterBehavior+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEmitterBehavior+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAEmitterBehavior (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAEmitterBehavior, CAEmitterBehavior *);
TF_EC_MINSTANCE_IMP(CAEmitterBehavior, CAEmitterBehavior *);


TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,BOOL,enabled)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAEmitterBehavior ,long long,accessibilityNavigationStyle)





@end