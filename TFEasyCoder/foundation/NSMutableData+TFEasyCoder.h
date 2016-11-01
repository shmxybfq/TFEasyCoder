//
//  NSMutableData+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableData,NSMutableData *);

@interface NSMutableData (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableData, NSMutableData *);
TF_EC_MINSTANCE_INT(NSMutableData,NSMutableData *);


TF_EC_CHAIN_PROP_INT(NSMutableData ,unsigned long long,length);




//superclass pros NSData
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableData ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableData ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableData ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableData ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableData ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableData ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableData ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableData ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableData ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableData ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableData ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableData ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableData ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableData ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSMutableData);


@end