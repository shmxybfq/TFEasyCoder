//
//  NSPredicate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPredicate,NSPredicate *);

@interface NSPredicate (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPredicate, NSPredicate *);
TF_EC_MINSTANCE_INT(NSPredicate,NSPredicate *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSPredicate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSPredicate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSPredicate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSPredicate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSPredicate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSPredicate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSPredicate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSPredicate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSPredicate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSPredicate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSPredicate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSPredicate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSPredicate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSPredicate ,long long,accessibilityNavigationStyle)





@end