//
//  UIPrinter+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPrinter+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPrinter (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPrinter, UIPrinter *);
TF_EC_MINSTANCE_IMP(UIPrinter, UIPrinter *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPrinter ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPrinter ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPrinter);


@end