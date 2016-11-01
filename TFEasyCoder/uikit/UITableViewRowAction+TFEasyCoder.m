//
//  UITableViewRowAction+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewRowAction+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITableViewRowAction (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITableViewRowAction, UITableViewRowAction *);
TF_EC_MINSTANCE_IMP(UITableViewRowAction, UITableViewRowAction *);


TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSString *,title)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,UIColor *,backgroundColor)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,UIVisualEffect *,backgroundEffect)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UITableViewRowAction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UITableViewRowAction);


@end