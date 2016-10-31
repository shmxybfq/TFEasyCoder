//
//  NSURLSessionStreamTask+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionStreamTask+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionStreamTask (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionStreamTask, NSURLSessionStreamTask *);
TF_EC_MINSTANCE_IMP(NSURLSessionStreamTask, NSURLSessionStreamTask *);






//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLSessionStreamTask ,long long,accessibilityNavigationStyle)





@end