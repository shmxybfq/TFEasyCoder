//
//  NSSimpleCString+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSSimpleCString,NSSimpleCString *);

@interface NSSimpleCString (TFEasyCoder)

TF_EC_MSTATIC_INT(NSSimpleCString, NSSimpleCString *);
TF_EC_MINSTANCE_INT(NSSimpleCString,NSSimpleCString *);






//superclass pros NSString
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSSimpleCString ,long long,accessibilityNavigationStyle)





@end