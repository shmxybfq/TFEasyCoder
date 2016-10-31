//
//  NSDate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDate,NSDate *);

@interface NSDate (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDate, NSDate *);
TF_EC_MINSTANCE_INT(NSDate,NSDate *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSDate ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSDate ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSDate ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSDate ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSDate ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSDate ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSDate ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSDate ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSDate ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSDate ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSDate ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSDate ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSDate ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSDate ,long long,accessibilityNavigationStyle)





@end