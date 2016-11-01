//
//  UIDevice+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDevice+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDevice (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDevice, UIDevice *);
TF_EC_MINSTANCE_IMP(UIDevice, UIDevice *);


TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,batteryMonitoringEnabled)
TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,proximityMonitoringEnabled)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDevice ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDevice ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDevice ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDevice ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDevice ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDevice ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDevice ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDevice ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDevice ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDevice ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDevice ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIDevice);


@end