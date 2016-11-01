//
//  UIScreen+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIScreen+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIScreen (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIScreen, UIScreen *);
TF_EC_MINSTANCE_IMP(UIScreen, UIScreen *);


TF_EC_CHAIN_PROP_IMP(UIScreen ,UIScreenMode *,currentMode)
TF_EC_CHAIN_PROP_IMP(UIScreen ,long long,overscanCompensation)
TF_EC_CHAIN_PROP_IMP(UIScreen ,double,brightness)
TF_EC_CHAIN_PROP_IMP(UIScreen ,BOOL,wantsSoftwareDimming)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIScreen ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIScreen ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIScreen ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIScreen ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIScreen ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIScreen ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIScreen ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIScreen ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIScreen ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIScreen ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIScreen ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIScreen ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIScreen ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIScreen ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIScreen);


@end