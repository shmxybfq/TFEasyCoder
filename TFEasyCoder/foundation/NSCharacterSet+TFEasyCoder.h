//
//  NSCharacterSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSCharacterSet,NSCharacterSet *);

@interface NSCharacterSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSCharacterSet, NSCharacterSet *);
TF_EC_MINSTANCE_INT(NSCharacterSet,NSCharacterSet *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSCharacterSet ,long long,accessibilityNavigationStyle)





@end