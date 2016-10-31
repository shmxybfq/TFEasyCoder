//
//  NSNotificationQueue+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSNotificationQueue,NSNotificationQueue *);

@interface NSNotificationQueue (TFEasyCoder)

TF_EC_MSTATIC_INT(NSNotificationQueue, NSNotificationQueue *);
TF_EC_MINSTANCE_INT(NSNotificationQueue,NSNotificationQueue *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSNotificationQueue ,long long,accessibilityNavigationStyle)





@end