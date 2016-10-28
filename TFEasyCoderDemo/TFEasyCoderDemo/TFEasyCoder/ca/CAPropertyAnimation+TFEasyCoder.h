//
//  CAPropertyAnimation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CAPropertyAnimation,CAPropertyAnimation *);

@interface CAPropertyAnimation (TFEasyCoder)

TF_EC_MSTATIC_INT(CAPropertyAnimation, CAPropertyAnimation *);
TF_EC_MINSTANCE_INT(CAPropertyAnimation,CAPropertyAnimation *);


TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,NSString *,keyPath);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,additive);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,BOOL,cumulative);
TF_EC_CHAIN_PROP_INT(CAPropertyAnimation ,CAValueFunction *,valueFunction);

@end