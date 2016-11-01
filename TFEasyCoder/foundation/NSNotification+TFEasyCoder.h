//
//  NSNotification+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNotification,NSNotification *);

@interface NSNotification (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNotification, NSNotification *);
TF_EC_MINSTANCE_INT(NSNotification,NSNotification *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSNotification ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSNotification ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSNotification ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSNotification ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSNotification ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSNotification ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSNotification ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSNotification ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSNotification ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSNotification ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSNotification ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSNotification ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSNotification ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSNotification ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSNotification);


@end