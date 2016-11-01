//
//  NSLayoutDimension+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutDimension,NSLayoutDimension *);

@interface NSLayoutDimension (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutDimension, NSLayoutDimension *);
TF_EC_MINSTANCE_INT(NSLayoutDimension,NSLayoutDimension *);






//superclass pros NSLayoutAnchor
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLayoutDimension ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSLayoutDimension);


@end