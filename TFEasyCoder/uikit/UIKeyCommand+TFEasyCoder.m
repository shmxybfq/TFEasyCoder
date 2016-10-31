//
//  UIKeyCommand+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIKeyCommand+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIKeyCommand (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIKeyCommand, UIKeyCommand *);
TF_EC_MINSTANCE_IMP(UIKeyCommand, UIKeyCommand *);


TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSString *,discoverabilityTitle)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIKeyCommand ,long long,accessibilityNavigationStyle)





@end