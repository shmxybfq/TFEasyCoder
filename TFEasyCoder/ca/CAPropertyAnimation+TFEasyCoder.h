//
//  CAPropertyAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAPropertyAnimation,CAPropertyAnimation *);

@interface CAPropertyAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CAPropertyAnimation, CAPropertyAnimation *);
TF_EC_MINSTANCE_INT(CAPropertyAnimation,CAPropertyAnimation *);


TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSString *,keyPath);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,additive);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,cumulative);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,CAValueFunction *,valueFunction);




//superclass pros CAAnimation
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,double,duration);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,float,speed);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CAPropertyAnimation);


@end