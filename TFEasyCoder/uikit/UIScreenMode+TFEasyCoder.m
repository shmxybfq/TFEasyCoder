//
//  UIScreenMode+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIScreenMode+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIScreenMode (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIScreenMode, UIScreenMode *);
TF_EC_MINSTANCE_IMP(UIScreenMode, UIScreenMode *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIScreenMode ,long long,accessibilityNavigationStyle)





@end