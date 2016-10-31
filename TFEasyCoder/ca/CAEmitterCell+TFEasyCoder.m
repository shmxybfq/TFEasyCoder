//
//  CAEmitterCell+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "CAEmitterCell+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation CAEmitterCell (TFEasyCoder)

TF_EC_MSTATIC_IMP(CAEmitterCell, CAEmitterCell *);
TF_EC_MINSTANCE_IMP(CAEmitterCell, CAEmitterCell *);




TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,name)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,birthRate)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,lifetime)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,lifetimeRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,emissionLatitude)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,emissionLongitude)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,emissionRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,velocity)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,velocityRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,xAcceleration)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,yAcceleration)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,zAcceleration)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,scale)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,scaleRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,scaleSpeed)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,spin)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,spinRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,CGColorRef,color)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,redRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,greenRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,blueRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,alphaRange)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,redSpeed)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,greenSpeed)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,blueSpeed)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,alphaSpeed)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,contentsScale)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,minificationFilter)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,magnificationFilter)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,minificationFilterBias)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSArray *,emitterCells)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSDictionary *,style)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,beginTime)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,duration)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,speed)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,timeOffset)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,float,repeatCount)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,double,repeatDuration)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,BOOL,autoreverses)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,fillMode)




//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(CAEmitterCell ,long long,accessibilityNavigationStyle)





@end