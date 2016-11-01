//
//  NSMutableIndexSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableIndexSet,NSMutableIndexSet *);

@interface NSMutableIndexSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableIndexSet, NSMutableIndexSet *);
TF_EC_MINSTANCE_INT(NSMutableIndexSet,NSMutableIndexSet *);






//superclass pros NSIndexSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableIndexSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMutableIndexSet);


@end