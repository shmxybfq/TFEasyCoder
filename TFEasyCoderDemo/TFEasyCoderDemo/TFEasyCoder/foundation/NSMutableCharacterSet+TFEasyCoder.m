//
//  NSMutableCharacterSet+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableCharacterSet+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableCharacterSet (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableCharacterSet, NSMutableCharacterSet *);
TF_EC_MINSTANCE_IMP(NSMutableCharacterSet, NSMutableCharacterSet *);






//superclass pros NSCharacterSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableCharacterSet ,long long,accessibilityNavigationStyle)





@end