//
//  UIAlertAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIAlertAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIAlertAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIAlertAction, UIAlertAction *);
TF_EC_MINSTANCE_IMP(UIAlertAction, UIAlertAction *);


TF_EC_CHAIN_PROP_IMP(UIAlertAction ,BOOL,enabled)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIAlertAction ,long long,accessibilityNavigationStyle)





@end