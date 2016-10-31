//
//  NSPersonNameComponents+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPersonNameComponents+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPersonNameComponents (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPersonNameComponents, NSPersonNameComponents *);
TF_EC_MINSTANCE_IMP(NSPersonNameComponents, NSPersonNameComponents *);


TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,namePrefix)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,givenName)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,middleName)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,familyName)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,nameSuffix)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,nickname)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSPersonNameComponents *,phoneticRepresentation)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPersonNameComponents ,long long,accessibilityNavigationStyle)





@end