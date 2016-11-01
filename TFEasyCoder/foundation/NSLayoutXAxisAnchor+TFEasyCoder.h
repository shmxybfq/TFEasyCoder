//
//  NSLayoutXAxisAnchor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutXAxisAnchor,NSLayoutXAxisAnchor *);

@interface NSLayoutXAxisAnchor (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutXAxisAnchor, NSLayoutXAxisAnchor *);
TF_EC_MINSTANCE_INT(NSLayoutXAxisAnchor,NSLayoutXAxisAnchor *);






//superclass pros NSLayoutAnchor
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLayoutXAxisAnchor ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSLayoutXAxisAnchor);


@end