//
//  NSMachPort+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMachPort+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMachPort (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMachPort, NSMachPort *);
//TF_EC_MINSTANCE_IMP(NSMachPort, NSMachPort *);






//superclass pros NSPort
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMachPort ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMachPort ,long long,accessibilityNavigationStyle)





@end