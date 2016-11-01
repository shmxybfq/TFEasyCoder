//
//  NSStream+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSStream+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSStream (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSStream, NSStream *);
TF_EC_MINSTANCE_IMP(NSStream, NSStream *);


TF_EC_CHAIN_PROP_IMP(NSStream ,id<NSStreamDelegate>  ,delegate)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSStream ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSStream ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSStream ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSStream ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSStream ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSStream ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSStream ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSStream ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSStream ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSStream ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSStream ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSStream ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSStream ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSStream ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSStream);


@end