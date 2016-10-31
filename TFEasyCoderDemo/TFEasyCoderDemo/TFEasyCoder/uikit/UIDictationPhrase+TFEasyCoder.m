//
//  UIDictationPhrase+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDictationPhrase+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDictationPhrase (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDictationPhrase, UIDictationPhrase *);
TF_EC_MINSTANCE_IMP(UIDictationPhrase, UIDictationPhrase *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIDictationPhrase ,long long,accessibilityNavigationStyle)





@end