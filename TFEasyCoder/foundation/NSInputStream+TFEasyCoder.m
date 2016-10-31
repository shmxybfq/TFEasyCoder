//
//  NSInputStream+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSInputStream+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSInputStream (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSInputStream, NSInputStream *);
TF_EC_MINSTANCE_IMP(NSInputStream, NSInputStream *);






//superclass pros NSStream
TF_EC_CHAIN_PROP_IMP(NSInputStream ,id<NSStreamDelegate>  ,delegate)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSInputStream ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSInputStream ,long long,accessibilityNavigationStyle)





@end