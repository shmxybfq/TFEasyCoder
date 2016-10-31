//
//  NSUserActivity+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSUserActivity,NSUserActivity *);

@interface NSUserActivity (TFEasyCoder)

TF_EC_MSTATIC_INT(NSUserActivity, NSUserActivity *);
TF_EC_MINSTANCE_INT(NSUserActivity,NSUserActivity *);


TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSString *,title);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSDictionary *,userInfo);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSSet *,requiredUserInfoKeys);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,needsSave);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSDate *,expirationDate);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSSet *,keywords);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,supportsContinuationStreams);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,id<NSUserActivityDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,eligibleForHandoff);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,eligibleForSearch);
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,eligibleForPublicIndexing);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSUserActivity ,long long,accessibilityNavigationStyle)





@end