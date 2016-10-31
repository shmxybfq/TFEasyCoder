//
//  NSKeyedArchiver+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSKeyedArchiver+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSKeyedArchiver (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSKeyedArchiver, NSKeyedArchiver *);
TF_EC_MINSTANCE_IMP(NSKeyedArchiver, NSKeyedArchiver *);


TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,id<NSKeyedArchiverDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,unsigned long long,outputFormat)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,BOOL,requiresSecureCoding)




//superclass pros NSCoder
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSKeyedArchiver ,long long,accessibilityNavigationStyle)





@end