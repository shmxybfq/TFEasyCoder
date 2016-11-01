//
//  UITextChecker+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextChecker+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextChecker (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextChecker, UITextChecker *);
TF_EC_MINSTANCE_IMP(UITextChecker, UITextChecker *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITextChecker ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITextChecker ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UITextChecker);


@end