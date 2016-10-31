//
//  UITapGestureRecognizer+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITapGestureRecognizer+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITapGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITapGestureRecognizer, UITapGestureRecognizer *);
TF_EC_MINSTANCE_IMP(UITapGestureRecognizer, UITapGestureRecognizer *);


TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,unsigned long long,numberOfTapsRequired)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,unsigned long long,numberOfTouchesRequired)




//superclass pros UIGestureRecognizer
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,cancelsTouchesInView)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,delaysTouchesBegan)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,delaysTouchesEnded)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSArray *,allowedTouchTypes)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSArray *,allowedPressTypes)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITapGestureRecognizer ,long long,accessibilityNavigationStyle)





@end