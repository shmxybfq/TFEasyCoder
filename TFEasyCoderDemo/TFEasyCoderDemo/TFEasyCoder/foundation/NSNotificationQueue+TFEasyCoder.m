//
//  NSNotificationQueue+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "NSNotificationQueue+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation NSNotificationQueue (TFEasyCoder)

TF_EC_MSTATIC_IMP(NSNotificationQueue, NSNotificationQueue *);
TF_EC_MINSTANCE_IMP(NSNotificationQueue, NSNotificationQueue *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(NSNotificationQueue ,long long,accessibilityNavigationStyle)





@end