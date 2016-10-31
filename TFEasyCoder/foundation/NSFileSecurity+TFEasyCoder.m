//
//  NSFileSecurity+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileSecurity+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileSecurity (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileSecurity, NSFileSecurity *);
TF_EC_MINSTANCE_IMP(NSFileSecurity, NSFileSecurity *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFileSecurity ,long long,accessibilityNavigationStyle)





@end