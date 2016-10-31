//
//  NSExpression+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSExpression,NSExpression *);

@interface NSExpression (TFEasyCoder)

TF_EC_MSTATIC_INT(NSExpression, NSExpression *);
TF_EC_MINSTANCE_INT(NSExpression,NSExpression *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSExpression ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSExpression ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSExpression ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSExpression ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSExpression ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSExpression ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSExpression ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSExpression ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSExpression ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSExpression ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSExpression ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSExpression ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSExpression ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSExpression ,long long,accessibilityNavigationStyle)





@end