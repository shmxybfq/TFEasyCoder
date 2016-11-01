//
//  NSCachedURLResponse+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSCachedURLResponse+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSCachedURLResponse (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSCachedURLResponse, NSCachedURLResponse *);
TF_EC_MINSTANCE_IMP(NSCachedURLResponse, NSCachedURLResponse *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSCachedURLResponse ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSCachedURLResponse);


@end