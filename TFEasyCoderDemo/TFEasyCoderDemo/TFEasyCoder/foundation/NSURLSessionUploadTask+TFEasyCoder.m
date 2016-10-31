//
//  NSURLSessionUploadTask+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionUploadTask+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionUploadTask (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionUploadTask, NSURLSessionUploadTask *);
TF_EC_MINSTANCE_IMP(NSURLSessionUploadTask, NSURLSessionUploadTask *);






//superclass pros NSURLSessionDataTask
//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLSessionUploadTask ,long long,accessibilityNavigationStyle)





@end