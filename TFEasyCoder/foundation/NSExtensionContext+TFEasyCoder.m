//
//  NSExtensionContext+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSExtensionContext+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSExtensionContext (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSExtensionContext, NSExtensionContext *);
TF_EC_MINSTANCE_IMP(NSExtensionContext, NSExtensionContext *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSExtensionContext ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSExtensionContext);


@end