//
//  NSCoder+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCoder,NSCoder *);

@interface NSCoder (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCoder, NSCoder *);
TF_EC_MINSTANCE_INT(NSCoder,NSCoder *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCoder ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCoder ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCoder ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCoder ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCoder ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCoder ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCoder ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCoder ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCoder ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCoder ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCoder ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCoder ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCoder ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCoder ,long long,accessibilityNavigationStyle)





@end