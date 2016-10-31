//
//  NSCompoundPredicate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCompoundPredicate,NSCompoundPredicate *);

@interface NSCompoundPredicate (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCompoundPredicate, NSCompoundPredicate *);
TF_EC_MINSTANCE_INT(NSCompoundPredicate,NSCompoundPredicate *);






//superclass pros NSPredicate
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCompoundPredicate ,long long,accessibilityNavigationStyle)





@end