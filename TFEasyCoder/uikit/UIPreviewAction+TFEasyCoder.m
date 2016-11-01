//
//  UIPreviewAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPreviewAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPreviewAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPreviewAction, UIPreviewAction *);
TF_EC_MINSTANCE_IMP(UIPreviewAction, UIPreviewAction *);







//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPreviewAction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPreviewAction);


@end