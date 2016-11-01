//
//  NSSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSSet,NSSet *);

@interface NSSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSSet, NSSet *);
TF_EC_MINSTANCE_INT(NSSet,NSSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSSet ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSSet);


@end