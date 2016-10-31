//
//  NSURLSessionTask+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionTask+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionTask (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionTask, NSURLSessionTask *);
TF_EC_MINSTANCE_IMP(NSURLSessionTask, NSURLSessionTask *);



TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,float,priority)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLSessionTask ,long long,accessibilityNavigationStyle)





@end