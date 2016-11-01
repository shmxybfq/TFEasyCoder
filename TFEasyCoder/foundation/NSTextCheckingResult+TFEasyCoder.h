//
//  NSTextCheckingResult+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTextCheckingResult,NSTextCheckingResult *);

@interface NSTextCheckingResult (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTextCheckingResult, NSTextCheckingResult *);
TF_EC_MINSTANCE_INT(NSTextCheckingResult,NSTextCheckingResult *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSTextCheckingResult ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSTextCheckingResult);


@end