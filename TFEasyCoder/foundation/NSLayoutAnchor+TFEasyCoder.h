//
//  NSLayoutAnchor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutAnchor,NSLayoutAnchor *);

@interface NSLayoutAnchor (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutAnchor, NSLayoutAnchor *);
TF_EC_MINSTANCE_INT(NSLayoutAnchor,NSLayoutAnchor *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLayoutAnchor ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSLayoutAnchor);


@end