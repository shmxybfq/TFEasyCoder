//
//  UIEvent+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIEvent+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIEvent (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIEvent, UIEvent *);
TF_EC_MINSTANCE_IMP(UIEvent, UIEvent *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIEvent ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIEvent ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIEvent ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIEvent ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIEvent ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIEvent ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIEvent ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIEvent ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIEvent ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIEvent ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIEvent ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIEvent ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIEvent ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIEvent ,long long,accessibilityNavigationStyle)





@end