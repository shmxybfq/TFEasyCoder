//
//  NSMutableCharacterSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableCharacterSet,NSMutableCharacterSet *);

@interface NSMutableCharacterSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableCharacterSet, NSMutableCharacterSet *);
TF_EC_MINSTANCE_INT(NSMutableCharacterSet,NSMutableCharacterSet *);






//superclass pros NSCharacterSet
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableCharacterSet ,long long,accessibilityNavigationStyle)





@end