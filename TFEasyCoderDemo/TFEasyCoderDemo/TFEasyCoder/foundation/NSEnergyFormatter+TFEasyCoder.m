//
//  NSEnergyFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSEnergyFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSEnergyFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSEnergyFormatter, NSEnergyFormatter *);
TF_EC_MINSTANCE_IMP(NSEnergyFormatter, NSEnergyFormatter *);


TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSNumberFormatter *,numberFormatter)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,long long,unitStyle)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,BOOL,forFoodEnergyUse)




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSEnergyFormatter ,long long,accessibilityNavigationStyle)





@end