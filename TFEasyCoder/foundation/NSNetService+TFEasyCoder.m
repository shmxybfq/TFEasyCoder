//
//  NSNetService+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNetService+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNetService (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNetService, NSNetService *);
TF_EC_MINSTANCE_IMP(NSNetService, NSNetService *);


TF_EC_CHAIN_PROP_IMP(NSNetService ,id<NSNetServiceDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(NSNetService ,BOOL,includesPeerToPeer)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNetService ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNetService ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNetService ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNetService ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNetService ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNetService ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNetService ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNetService ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNetService ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNetService ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNetService ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNetService ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNetService ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNetService ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSNetService);


@end