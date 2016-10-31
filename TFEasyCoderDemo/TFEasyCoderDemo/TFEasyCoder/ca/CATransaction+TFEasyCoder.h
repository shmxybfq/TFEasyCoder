//
//  CATransaction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATransaction,CATransaction *);

@interface CATransaction (TFEasyCoder)

TF_EC_MSTATIC_INT(CATransaction, CATransaction *);
TF_EC_MINSTANCE_INT(CATransaction,CATransaction *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CATransaction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CATransaction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CATransaction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CATransaction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CATransaction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CATransaction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CATransaction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CATransaction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CATransaction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CATransaction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CATransaction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CATransaction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CATransaction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CATransaction ,long long,accessibilityNavigationStyle)





@end