//
//  NSCache+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCache+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCache (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCache, NSCache *);
TF_EC_MINSTANCE_IMP(NSCache, NSCache *);


TF_EC_CHAIN_PROP_IMP(NSCache ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(NSCache ,id<NSCacheDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSCache ,unsigned long long,totalCostLimit)
TF_EC_CHAIN_PROP_IMP(NSCache ,unsigned long long,countLimit)
TF_EC_CHAIN_PROP_IMP(NSCache ,BOOL,evictsObjectsWithDiscardedContent)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCache ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCache ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCache ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCache ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCache ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCache ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCache ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCache ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCache ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCache ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCache ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCache ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCache ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCache ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSCache);


@end