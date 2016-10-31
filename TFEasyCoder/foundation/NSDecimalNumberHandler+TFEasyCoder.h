//
//  NSDecimalNumberHandler+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDecimalNumberHandler,NSDecimalNumberHandler *);

@interface NSDecimalNumberHandler (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDecimalNumberHandler, NSDecimalNumberHandler *);
TF_EC_MINSTANCE_INT(NSDecimalNumberHandler,NSDecimalNumberHandler *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDecimalNumberHandler ,long long,accessibilityNavigationStyle)





@end