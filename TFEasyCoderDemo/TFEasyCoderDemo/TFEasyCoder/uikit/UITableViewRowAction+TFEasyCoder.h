//
//  UITableViewRowAction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITableViewRowAction,UITableViewRowAction *);

@interface UITableViewRowAction (TFEasyCoder)

TF_EC_MSTATIC_INT(UITableViewRowAction, UITableViewRowAction *);
TF_EC_MINSTANCE_INT(UITableViewRowAction,UITableViewRowAction *);


TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,UIColor *,backgroundColor);
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,UIVisualEffect *,backgroundEffect);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITableViewRowAction ,long long,accessibilityNavigationStyle)





@end