//
//  NSURLComponents+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLComponents,NSURLComponents *);

@interface NSURLComponents (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLComponents, NSURLComponents *);
TF_EC_MINSTANCE_INT(NSURLComponents,NSURLComponents *);


TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,scheme);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,user);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,password);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,host);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSNumber *,port);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,path);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,query);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,fragment);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,percentEncodedUser);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,percentEncodedPassword);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,percentEncodedHost);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,percentEncodedPath);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,percentEncodedQuery);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,percentEncodedFragment);
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSArray *,queryItems);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSURLComponents ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(NSURLComponents);


@end