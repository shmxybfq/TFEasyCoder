//
//  UITextPosition+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextPosition+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextPosition (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextPosition, UITextPosition *);
TF_EC_MINSTANCE_IMP(UITextPosition, UITextPosition *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextPosition ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextPosition ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UITextPosition);


@end