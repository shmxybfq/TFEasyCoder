//
//  NSValueTransformer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSValueTransformer,NSValueTransformer *);

@interface NSValueTransformer (TFEasyCoder)

TF_EC_MSTATIC_INT(NSValueTransformer, NSValueTransformer *);
TF_EC_MINSTANCE_INT(NSValueTransformer,NSValueTransformer *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSValueTransformer ,long long,accessibilityNavigationStyle)





@end