//
//  NSUserDefaults+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSUserDefaults+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSUserDefaults (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSUserDefaults, NSUserDefaults *);
TF_EC_MINSTANCE_IMP(NSUserDefaults, NSUserDefaults *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSUserDefaults ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSUserDefaults);


@end