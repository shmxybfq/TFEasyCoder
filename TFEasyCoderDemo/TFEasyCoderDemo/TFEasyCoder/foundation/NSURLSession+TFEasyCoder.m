//
//  NSURLSession+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSURLSession+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSURLSession (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSURLSession, NSURLSession *);
TF_EC_MINSTANCE_IMP(NSURLSession, NSURLSession *);


TF_EC_CHAIN_PROP_IMP(NSURLSession ,NSString *,sessionDescription)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSURLSession ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSURLSession ,long long,accessibilityNavigationStyle)





@end