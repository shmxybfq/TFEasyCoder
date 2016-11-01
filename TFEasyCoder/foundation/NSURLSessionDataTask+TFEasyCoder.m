//
//  NSURLSessionDataTask+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionDataTask+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionDataTask (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionDataTask, NSURLSessionDataTask *);
TF_EC_MINSTANCE_IMP(NSURLSessionDataTask, NSURLSessionDataTask *);






//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDataTask ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSURLSessionDataTask);


@end