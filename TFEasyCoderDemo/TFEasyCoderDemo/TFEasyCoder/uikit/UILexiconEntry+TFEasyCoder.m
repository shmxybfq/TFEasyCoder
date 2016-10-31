//
//  UILexiconEntry+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILexiconEntry+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILexiconEntry (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILexiconEntry, UILexiconEntry *);
TF_EC_MINSTANCE_IMP(UILexiconEntry, UILexiconEntry *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UILexiconEntry ,long long,accessibilityNavigationStyle)





@end