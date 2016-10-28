//
//  UIAccessibilityCustomAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAccessibilityCustomAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAccessibilityCustomAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAccessibilityCustomAction, UIAccessibilityCustomAction *);
TF_EC_MINSTANCE_IMP(UIAccessibilityCustomAction, UIAccessibilityCustomAction *);


TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(UIAccessibilityCustomAction ,SEL,selector)

@end