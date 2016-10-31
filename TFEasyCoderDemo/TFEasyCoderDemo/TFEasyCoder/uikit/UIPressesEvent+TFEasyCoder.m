//
//  UIPressesEvent+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPressesEvent+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPressesEvent (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPressesEvent, UIPressesEvent *);
TF_EC_MINSTANCE_IMP(UIPressesEvent, UIPressesEvent *);






//superclass pros UIEvent
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPressesEvent ,long long,accessibilityNavigationStyle)





@end