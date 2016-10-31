//
//  NSMutableURLRequest+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableURLRequest,NSMutableURLRequest *);

@interface NSMutableURLRequest (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableURLRequest, NSMutableURLRequest *);
TF_EC_MINSTANCE_INT(NSMutableURLRequest,NSMutableURLRequest *);


TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSString *,HTTPMethod);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSDictionary *,allHTTPHeaderFields);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSData *,HTTPBody);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSInputStream *,HTTPBodyStream);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,BOOL,HTTPShouldHandleCookies);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,BOOL,HTTPShouldUsePipelining);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,unsigned long long,cachePolicy);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,double,timeoutInterval);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,unsigned long long,networkServiceType);
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,BOOL,allowsCellularAccess);




//superclass pros NSURLRequest
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSMutableURLRequest ,long long,accessibilityNavigationStyle)





@end