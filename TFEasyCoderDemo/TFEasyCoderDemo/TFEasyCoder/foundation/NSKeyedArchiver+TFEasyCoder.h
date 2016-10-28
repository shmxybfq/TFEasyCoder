//
//  NSKeyedArchiver+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSKeyedArchiver,NSKeyedArchiver *);

@interface NSKeyedArchiver (TFEasyCoder)

TF_EC_MSTATIC_INT(NSKeyedArchiver, NSKeyedArchiver *);
TF_EC_MINSTANCE_INT(NSKeyedArchiver,NSKeyedArchiver *);


TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,id<NSKeyedArchiverDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,unsigned long long,outputFormat);
TF_EC_CHAIN_PROP_INT(NSKeyedArchiver ,BOOL,requiresSecureCoding);

@end