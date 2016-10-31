//
//  NSThread+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSThread+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSThread (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSThread, NSThread *);
TF_EC_MINSTANCE_IMP(NSThread, NSThread *);


TF_EC_CHAIN_PROP_IMP(NSThread ,double,threadPriority)
TF_EC_CHAIN_PROP_IMP(NSThread ,long long,qualityOfService)
TF_EC_CHAIN_PROP_IMP(NSThread ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(NSThread ,unsigned long long,stackSize)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSThread ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSThread ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSThread ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSThread ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSThread ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSThread ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSThread ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSThread ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSThread ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSThread ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSThread ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSThread ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSThread ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSThread ,long long,accessibilityNavigationStyle)





@end