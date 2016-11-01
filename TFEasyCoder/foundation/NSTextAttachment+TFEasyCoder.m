//
//  NSTextAttachment+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTextAttachment+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTextAttachment (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTextAttachment, NSTextAttachment *);
TF_EC_MINSTANCE_IMP(NSTextAttachment, NSTextAttachment *);


TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSData *,contents)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSString *,fileType)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSFileWrapper *,fileWrapper)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSTextAttachment ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSTextAttachment);


@end