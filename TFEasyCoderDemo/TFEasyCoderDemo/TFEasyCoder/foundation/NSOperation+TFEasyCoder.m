//
//  NSOperation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSOperation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


@implementation NSOperation (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSOperation, NSOperation *);
TF_EC_MINSTANCE_IMP(NSOperation, NSOperation *);


TF_EC_CHAIN_PROP_IMP(NSOperation ,long long,queuePriority)
TF_EC_CHAIN_PROP_IMP(NSOperation ,double,threadPriority)
TF_EC_CHAIN_PROP_IMP(NSOperation ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSString *,name)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSOperation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSOperation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSOperation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSOperation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSOperation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSOperation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSOperation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSOperation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSOperation ,long long,accessibilityNavigationStyle)





@end
