//
//  NSData+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSData,NSData *);

@interface NSData (TFEasyCoder)

TF_EC_MSTATIC_INT(NSData, NSData *);
TF_EC_MINSTANCE_INT(NSData,NSData *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSData ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSData ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSData ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSData ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSData ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSData ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSData ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSData ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSData ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSData ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSData ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSData ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSData ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSData ,long long,accessibilityNavigationStyle)





@end