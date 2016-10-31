//
//  NSRunLoop+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSRunLoop+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSRunLoop (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSRunLoop, NSRunLoop *);
TF_EC_MINSTANCE_IMP(NSRunLoop, NSRunLoop *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSRunLoop ,long long,accessibilityNavigationStyle)





@end