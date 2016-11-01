//
//  NSException+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSException,NSException *);

@interface NSException (TFEasyCoder)

TF_EC_MSTATIC_INT(NSException, NSException *);
TF_EC_MINSTANCE_INT(NSException,NSException *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSException ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSException ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSException ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSException ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSException ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSException ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSException ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSException ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSException ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSException ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSException ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSException ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSException ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSException ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSException);


@end