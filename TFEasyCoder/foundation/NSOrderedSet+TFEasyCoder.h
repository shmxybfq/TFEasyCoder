//
//  NSOrderedSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSOrderedSet,NSOrderedSet *);

@interface NSOrderedSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSOrderedSet, NSOrderedSet *);
TF_EC_MINSTANCE_INT(NSOrderedSet,NSOrderedSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSOrderedSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSOrderedSet);


@end