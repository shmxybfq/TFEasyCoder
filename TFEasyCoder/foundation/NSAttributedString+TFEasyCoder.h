//
//  NSAttributedString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSAttributedString,NSAttributedString *);

@interface NSAttributedString (TFEasyCoder)

TF_EC_MSTATIC_INT(NSAttributedString, NSAttributedString *);
TF_EC_MINSTANCE_INT(NSAttributedString,NSAttributedString *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSAttributedString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSAttributedString ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSAttributedString);


@end