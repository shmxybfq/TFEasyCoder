//
//  NSMutableArray+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMutableArray+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMutableArray (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMutableArray, NSMutableArray *);
TF_EC_MINSTANCE_IMP(NSMutableArray, NSMutableArray *);






//superclass pros NSArray
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMutableArray ,long long,accessibilityNavigationStyle)





@end