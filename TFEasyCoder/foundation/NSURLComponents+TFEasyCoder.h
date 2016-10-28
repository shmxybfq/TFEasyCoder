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

@end