//
//  NSItemProvider+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSItemProvider+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSItemProvider (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSItemProvider, NSItemProvider *);
TF_EC_MINSTANCE_IMP(NSItemProvider, NSItemProvider *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSItemProvider ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSItemProvider);


@end