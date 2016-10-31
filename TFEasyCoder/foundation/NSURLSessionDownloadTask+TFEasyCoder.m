//
//  NSURLSessionDownloadTask+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSessionDownloadTask+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSessionDownloadTask (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSessionDownloadTask, NSURLSessionDownloadTask *);
TF_EC_MINSTANCE_IMP(NSURLSessionDownloadTask, NSURLSessionDownloadTask *);






//superclass pros NSURLSessionTask
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,float,priority)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLSessionDownloadTask ,long long,accessibilityNavigationStyle)





@end