//
//  NSLengthFormatter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSLengthFormatter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSLengthFormatter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSLengthFormatter, NSLengthFormatter *);
TF_EC_MINSTANCE_IMP(NSLengthFormatter, NSLengthFormatter *);


TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSNumberFormatter *,numberFormatter)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,long long,unitStyle)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,BOOL,forPersonHeightUse)




//superclass pros NSFormatter
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSLengthFormatter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSLengthFormatter);


@end