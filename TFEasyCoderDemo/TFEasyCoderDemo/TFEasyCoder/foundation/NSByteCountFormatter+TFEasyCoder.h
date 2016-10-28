//
//  NSByteCountFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSByteCountFormatter,NSByteCountFormatter *);

@interface NSByteCountFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSByteCountFormatter, NSByteCountFormatter *);
TF_EC_MINSTANCE_INT(NSByteCountFormatter,NSByteCountFormatter *);


TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,unsigned long long,allowedUnits);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,long long,countStyle);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,allowsNonnumericFormatting);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,includesUnit);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,includesCount);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,includesActualByteCount);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,adaptive);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,BOOL,zeroPadsFractionDigits);
TF_EC_CHAIN_PROP_INT(NSByteCountFormatter ,long long,formattingContext);

@end