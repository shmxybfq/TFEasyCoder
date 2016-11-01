//
//  NSInvocationOperation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSInvocationOperation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSInvocationOperation (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSInvocationOperation, NSInvocationOperation *);
TF_EC_MINSTANCE_IMP(NSInvocationOperation, NSInvocationOperation *);






//superclass pros NSOperation
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,long long,queuePriority)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,double,threadPriority)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,NSString *,name)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSInvocationOperation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSInvocationOperation);


@end