//
//  NSPurgeableData+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPurgeableData+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPurgeableData (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPurgeableData, NSPurgeableData *);
TF_EC_MINSTANCE_IMP(NSPurgeableData, NSPurgeableData *);






//superclass pros NSMutableData
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,unsigned long long,length)
//superclass pros NSData
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPurgeableData ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSPurgeableData);


@end