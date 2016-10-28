//
//  NSLengthFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLengthFormatter,NSLengthFormatter *);

@interface NSLengthFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLengthFormatter, NSLengthFormatter *);
TF_EC_MINSTANCE_INT(NSLengthFormatter,NSLengthFormatter *);


TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,NSNumberFormatter *,numberFormatter);
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,long long,unitStyle);
TF_EC_CHAIN_PROP_INT(NSLengthFormatter ,BOOL,forPersonHeightUse);

@end