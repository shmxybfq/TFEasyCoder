//
//  NSFileWrapper+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSFileWrapper+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSFileWrapper (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSFileWrapper, NSFileWrapper *);
TF_EC_MINSTANCE_IMP(NSFileWrapper, NSFileWrapper *);


TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,preferredFilename)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,filename)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSDictionary *,fileAttributes)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSFileWrapper ,long long,accessibilityNavigationStyle)





@end