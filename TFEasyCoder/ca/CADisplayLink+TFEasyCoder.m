//
//  CADisplayLink+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CADisplayLink+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CADisplayLink (TFEasyCoder)

TF_EC_MSTATIC_IMP(CADisplayLink, CADisplayLink *);
TF_EC_MINSTANCE_IMP(CADisplayLink, CADisplayLink *);


TF_EC_CHAIN_PROP_IMP(CADisplayLink ,BOOL,paused)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,long long,frameInterval)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CADisplayLink ,long long,accessibilityNavigationStyle)





@end