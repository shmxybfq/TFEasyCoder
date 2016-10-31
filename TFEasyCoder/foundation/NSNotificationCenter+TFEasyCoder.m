//
//  NSNotificationCenter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNotificationCenter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNotificationCenter (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNotificationCenter, NSNotificationCenter *);
TF_EC_MINSTANCE_IMP(NSNotificationCenter, NSNotificationCenter *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNotificationCenter ,long long,accessibilityNavigationStyle)





@end