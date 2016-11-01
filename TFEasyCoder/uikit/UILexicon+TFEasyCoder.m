//
//  UILexicon+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILexicon+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILexicon (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILexicon, UILexicon *);
TF_EC_MINSTANCE_IMP(UILexicon, UILexicon *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UILexicon ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UILexicon ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UILexicon ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UILexicon ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UILexicon ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UILexicon ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UILexicon ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UILexicon ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UILexicon ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UILexicon ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UILexicon ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UILexicon ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UILexicon ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UILexicon ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UILexicon);


@end