//
//  NSRegularExpression+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSRegularExpression,NSRegularExpression *);

@interface NSRegularExpression (TFEasyCoder)

TF_EC_MSTATIC_INT(NSRegularExpression, NSRegularExpression *);
TF_EC_MINSTANCE_INT(NSRegularExpression,NSRegularExpression *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSRegularExpression ,long long,accessibilityNavigationStyle)





@end