//
//  NSScanner+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSScanner,NSScanner *);

@interface NSScanner (TFEasyCoder)

TF_EC_MSTATIC_INT(NSScanner, NSScanner *);
TF_EC_MINSTANCE_INT(NSScanner,NSScanner *);


TF_EC_CHAIN_PROP_INT(NSScanner ,unsigned long long,scanLocation);
TF_EC_CHAIN_PROP_INT(NSScanner ,NSCharacterSet *,charactersToBeSkipped);
TF_EC_CHAIN_PROP_INT(NSScanner ,BOOL,caseSensitive);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSScanner ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSScanner ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSScanner ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSScanner ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSScanner ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSScanner ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSScanner ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSScanner ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSScanner ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSScanner ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSScanner ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSScanner ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSScanner ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSScanner ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSScanner);


@end