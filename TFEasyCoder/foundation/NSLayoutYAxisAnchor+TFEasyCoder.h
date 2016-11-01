//
//  NSLayoutYAxisAnchor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutYAxisAnchor,NSLayoutYAxisAnchor *);

@interface NSLayoutYAxisAnchor (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutYAxisAnchor, NSLayoutYAxisAnchor *);
TF_EC_MINSTANCE_INT(NSLayoutYAxisAnchor,NSLayoutYAxisAnchor *);






//superclass pros NSLayoutAnchor
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLayoutYAxisAnchor ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSLayoutYAxisAnchor);


@end