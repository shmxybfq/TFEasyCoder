//
//  NSParagraphStyle+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSParagraphStyle+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSParagraphStyle (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSParagraphStyle, NSParagraphStyle *);
TF_EC_MINSTANCE_IMP(NSParagraphStyle, NSParagraphStyle *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSParagraphStyle ,long long,accessibilityNavigationStyle)





@end