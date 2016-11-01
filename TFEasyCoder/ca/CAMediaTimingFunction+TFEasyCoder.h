//
//  CAMediaTimingFunction+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAMediaTimingFunction,CAMediaTimingFunction *);

@interface CAMediaTimingFunction (TFEasyCoder)

TF_EC_MSTATIC_INT(CAMediaTimingFunction, CAMediaTimingFunction *);
TF_EC_MINSTANCE_INT(CAMediaTimingFunction,CAMediaTimingFunction *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAMediaTimingFunction ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAMediaTimingFunction);


@end