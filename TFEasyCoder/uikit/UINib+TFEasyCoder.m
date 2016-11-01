//
//  UINib+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UINib+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UINib (TFEasyCoder)

TF_EC_MSTATIC_IMP(UINib, UINib *);
TF_EC_MINSTANCE_IMP(UINib, UINib *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UINib ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UINib ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UINib ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UINib ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UINib ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UINib ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UINib ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UINib ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UINib ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UINib ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UINib ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UINib ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UINib ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UINib ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UINib);


@end