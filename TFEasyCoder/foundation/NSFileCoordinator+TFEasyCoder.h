//
//  NSFileCoordinator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSFileCoordinator,NSFileCoordinator *);

@interface NSFileCoordinator (TFEasyCoder)

TF_EC_MSTATIC_INT(NSFileCoordinator, NSFileCoordinator *);
TF_EC_MINSTANCE_INT(NSFileCoordinator,NSFileCoordinator *);


TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,NSString *,purposeIdentifier);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSFileCoordinator ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSFileCoordinator);


@end