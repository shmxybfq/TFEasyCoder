//
//  NSAssertionHandler+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSAssertionHandler+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSAssertionHandler (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSAssertionHandler, NSAssertionHandler *);
TF_EC_MINSTANCE_IMP(NSAssertionHandler, NSAssertionHandler *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSAssertionHandler ,long long,accessibilityNavigationStyle)





@end