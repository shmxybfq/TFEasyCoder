//
//  NSMutableAttributedString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableAttributedString,NSMutableAttributedString *);

@interface NSMutableAttributedString (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableAttributedString, NSMutableAttributedString *);
TF_EC_MINSTANCE_INT(NSMutableAttributedString,NSMutableAttributedString *);






//superclass pros NSAttributedString
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableAttributedString ,long long,accessibilityNavigationStyle)





@end