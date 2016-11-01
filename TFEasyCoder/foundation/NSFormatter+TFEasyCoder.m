//
//  NSFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFormatter, NSFormatter *);
TF_EC_MINSTANCE_IMP(NSFormatter, NSFormatter *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSFormatter);


@end