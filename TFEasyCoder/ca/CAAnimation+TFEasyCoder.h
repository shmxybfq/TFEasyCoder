//
//  CAAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAAnimation,CAAnimation *);

@interface CAAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CAAnimation, CAAnimation *);
TF_EC_MINSTANCE_INT(CAAnimation,CAAnimation *);



TF_EC_CHAIN_PROP_INT(CAAnimation ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,duration);
TF_EC_CHAIN_PROP_INT(CAAnimation ,float,speed);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAAnimation ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAAnimation ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAAnimation ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSString *,fillMode);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAAnimation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAAnimation);


@end