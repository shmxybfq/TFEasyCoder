//
//  NSInvocation+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSInvocation,NSInvocation *);

@interface NSInvocation (TFEasyCoder)

TF_EC_MSTATIC_INT(NSInvocation, NSInvocation *);
TF_EC_MINSTANCE_INT(NSInvocation,NSInvocation *);


TF_EC_CHAIN_PROP_INT(NSInvocation ,SEL,selector);

@end