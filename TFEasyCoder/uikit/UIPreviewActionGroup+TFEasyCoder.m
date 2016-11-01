//
//  UIPreviewActionGroup+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPreviewActionGroup+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPreviewActionGroup (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPreviewActionGroup, UIPreviewActionGroup *);
TF_EC_MINSTANCE_IMP(UIPreviewActionGroup, UIPreviewActionGroup *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPreviewActionGroup ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPreviewActionGroup);


@end