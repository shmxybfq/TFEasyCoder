//
//  CATransition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATransition,CATransition *);

@interface CATransition (TFEasyCoder)

TF_EC_MSTATIC_INT(CATransition, CATransition *);
TF_EC_MINSTANCE_INT(CATransition,CATransition *);


TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,type);
TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,subtype);
TF_EC_CHAIN_PROP_INT(CATransition ,float,startProgress);
TF_EC_CHAIN_PROP_INT(CATransition ,float,endProgress);




//superclass pros CAAnimation
TF_EC_CHAIN_PROP_INT(CATransition ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CATransition ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CATransition ,double,duration);
TF_EC_CHAIN_PROP_INT(CATransition ,float,speed);
TF_EC_CHAIN_PROP_INT(CATransition ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CATransition ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CATransition ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CATransition ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CATransition ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CATransition ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CATransition ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CATransition ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CATransition ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CATransition ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CATransition ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CATransition ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CATransition ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CATransition ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CATransition ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(CATransition);


@end