//
//  NSProcessInfo+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSProcessInfo+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSProcessInfo (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSProcessInfo, NSProcessInfo *);
TF_EC_MINSTANCE_IMP(NSProcessInfo, NSProcessInfo *);


TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSString *,processName)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSProcessInfo ,long long,accessibilityNavigationStyle)





@end