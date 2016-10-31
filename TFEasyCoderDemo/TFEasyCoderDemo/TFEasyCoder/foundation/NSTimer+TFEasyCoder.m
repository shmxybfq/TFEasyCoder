//
//  NSTimer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSTimer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSTimer (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSTimer, NSTimer *);
TF_EC_MINSTANCE_IMP(NSTimer, NSTimer *);


TF_EC_CHAIN_PROP_IMP(NSTimer ,NSDate *,fireDate)
TF_EC_CHAIN_PROP_IMP(NSTimer ,double,tolerance)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSTimer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSTimer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSTimer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSTimer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSTimer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSTimer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSTimer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSTimer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSTimer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSTimer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSTimer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSTimer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSTimer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSTimer ,long long,accessibilityNavigationStyle)





@end