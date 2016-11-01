//
//  NSMutableOrderedSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableOrderedSet,NSMutableOrderedSet *);

@interface NSMutableOrderedSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableOrderedSet, NSMutableOrderedSet *);
TF_EC_MINSTANCE_INT(NSMutableOrderedSet,NSMutableOrderedSet *);






//superclass pros NSOrderedSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableOrderedSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMutableOrderedSet);


@end