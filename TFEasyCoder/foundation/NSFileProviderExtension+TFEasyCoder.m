//
//  NSFileProviderExtension+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileProviderExtension+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileProviderExtension (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileProviderExtension, NSFileProviderExtension *);
TF_EC_MINSTANCE_IMP(NSFileProviderExtension, NSFileProviderExtension *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFileProviderExtension ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSFileProviderExtension);


@end