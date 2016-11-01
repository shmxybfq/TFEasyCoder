//
//  NSURLCredentialStorage+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLCredentialStorage+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLCredentialStorage (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLCredentialStorage, NSURLCredentialStorage *);
TF_EC_MINSTANCE_IMP(NSURLCredentialStorage, NSURLCredentialStorage *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLCredentialStorage ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLCredentialStorage);


@end