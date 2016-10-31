//
//  NSMapTable+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSMapTable+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSMapTable (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSMapTable, NSMapTable *);
TF_EC_MINSTANCE_IMP(NSMapTable, NSMapTable *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSMapTable ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSMapTable ,long long,accessibilityNavigationStyle)





@end