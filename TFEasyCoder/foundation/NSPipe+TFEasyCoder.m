//
//  NSPipe+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSPipe+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSPipe (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSPipe, NSPipe *);
TF_EC_MINSTANCE_IMP(NSPipe, NSPipe *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSPipe ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSPipe ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSPipe ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSPipe ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSPipe ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSPipe ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSPipe ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSPipe ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSPipe ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSPipe ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSPipe ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSPipe ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSPipe ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSPipe ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(NSPipe);


@end