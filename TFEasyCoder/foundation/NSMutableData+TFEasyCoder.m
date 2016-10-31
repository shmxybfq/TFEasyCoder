//
//  NSMutableData+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableData+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableData (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableData, NSMutableData *);
TF_EC_MINSTANCE_IMP(NSMutableData, NSMutableData *);


TF_EC_CHAIN_PROP_IMP(NSMutableData ,unsigned long long,length)




//superclass pros NSData
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableData ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableData ,long long,accessibilityNavigationStyle)





@end