//
//  NSMutableSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableSet,NSMutableSet *);

@interface NSMutableSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableSet, NSMutableSet *);
TF_EC_MINSTANCE_INT(NSMutableSet,NSMutableSet *);






//superclass pros NSSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableSet ,long long,accessibilityNavigationStyle)





@end