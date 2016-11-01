//
//  NSIndexSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSIndexSet,NSIndexSet *);

@interface NSIndexSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSIndexSet, NSIndexSet *);
TF_EC_MINSTANCE_INT(NSIndexSet,NSIndexSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSIndexSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSIndexSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSIndexSet);


@end