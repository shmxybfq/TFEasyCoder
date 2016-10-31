//
//  CASpringAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CASpringAnimation,CASpringAnimation *);

@interface CASpringAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CASpringAnimation, CASpringAnimation *);
TF_EC_MINSTANCE_INT(CASpringAnimation,CASpringAnimation *);


TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,mass);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,stiffness);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,damping);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,initialVelocity);




//superclass pros CABasicAnimation
//superclass pros CAPropertyAnimation
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSString *,keyPath);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,BOOL,additive);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,BOOL,cumulative);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,CAValueFunction *,valueFunction);
//superclass pros CAAnimation
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,CAMediaTimingFunction *,timingFunction);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,beginTime);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,duration);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,float,speed);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,timeOffset);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,float,repeatCount);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,double,repeatDuration);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,BOOL,autoreverses);
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSString *,fillMode);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(CASpringAnimation ,long long,accessibilityNavigationStyle)





@end