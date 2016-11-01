//
//  NSMassFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMassFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMassFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMassFormatter, NSMassFormatter *);
TF_EC_MINSTANCE_IMP(NSMassFormatter, NSMassFormatter *);


TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSNumberFormatter *,numberFormatter)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,long long,unitStyle)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,BOOL,forPersonMassUse)




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMassFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSMassFormatter);


@end