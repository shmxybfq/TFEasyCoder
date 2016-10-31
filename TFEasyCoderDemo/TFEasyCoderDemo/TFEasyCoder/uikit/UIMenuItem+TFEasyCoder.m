//
//  UIMenuItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIMenuItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIMenuItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIMenuItem, UIMenuItem *);
TF_EC_MINSTANCE_IMP(UIMenuItem, UIMenuItem *);


TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,SEL,action)





//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIMenuItem ,long long,accessibilityNavigationStyle)





@end