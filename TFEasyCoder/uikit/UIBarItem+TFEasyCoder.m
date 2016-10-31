//
//  UIBarItem+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIBarItem+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIBarItem (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIBarItem, UIBarItem *);
TF_EC_MINSTANCE_IMP(UIBarItem, UIBarItem *);


TF_EC_CHAIN_PROP_IMP(UIBarItem ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,UIImage *,image)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,UIImage *,landscapeImagePhone)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,UIEdgeInsets,imageInsets)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,UIEdgeInsets,landscapeImagePhoneInsets)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,long long,tag)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIBarItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIBarItem ,long long,accessibilityNavigationStyle)





@end