//
//  NSInvocation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSInvocation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSInvocation (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSInvocation, NSInvocation *);
TF_EC_MINSTANCE_IMP(NSInvocation, NSInvocation *);


TF_EC_CHAIN_PROP_IMP(NSInvocation ,SEL,selector)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSInvocation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSInvocation ,long long,accessibilityNavigationStyle)





@end