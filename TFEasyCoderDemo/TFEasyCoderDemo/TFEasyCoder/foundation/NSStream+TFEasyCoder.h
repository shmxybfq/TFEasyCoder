//
//  NSStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSStream,NSStream *);

@interface NSStream (TFEasyCoder)

TF_EC_MSTATIC_INT(NSStream, NSStream *);
TF_EC_MINSTANCE_INT(NSStream,NSStream *);


TF_EC_CHAIN_PROP_INT(NSStream ,id<NSStreamDelegate> ,delegate);

@end