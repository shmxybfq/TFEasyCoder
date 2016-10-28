//
//  NSKeyedUnarchiver+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSKeyedUnarchiver,NSKeyedUnarchiver *);

@interface NSKeyedUnarchiver (TFEasyCoder)

TF_EC_MSTATIC_INT(NSKeyedUnarchiver, NSKeyedUnarchiver *);
TF_EC_MINSTANCE_INT(NSKeyedUnarchiver,NSKeyedUnarchiver *);


TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,id<NSKeyedUnarchiverDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSKeyedUnarchiver ,BOOL,requiresSecureCoding);

@end