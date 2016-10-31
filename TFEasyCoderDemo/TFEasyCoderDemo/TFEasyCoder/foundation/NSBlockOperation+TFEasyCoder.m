//
//  NSBlockOperation+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSBlockOperation+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSBlockOperation (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSBlockOperation, NSBlockOperation *);
TF_EC_MINSTANCE_IMP(NSBlockOperation, NSBlockOperation *);






//superclass pros NSOperation
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,long long,queuePriority)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,double,threadPriority)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,NSString *,name)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSBlockOperation ,long long,accessibilityNavigationStyle)





@end