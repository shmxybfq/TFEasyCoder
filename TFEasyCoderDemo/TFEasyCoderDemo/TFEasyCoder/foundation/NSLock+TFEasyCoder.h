//
//  NSLock+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLock,NSLock *);

@interface NSLock (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLock, NSLock *);
TF_EC_MINSTANCE_INT(NSLock,NSLock *);


TF_EC_CHAIN_PROP_INT(NSLock ,NSString *,name);

@end