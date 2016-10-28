//
//  NSMassFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMassFormatter,NSMassFormatter *);

@interface NSMassFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMassFormatter, NSMassFormatter *);
TF_EC_MINSTANCE_INT(NSMassFormatter,NSMassFormatter *);


TF_EC_CHAIN_PROP_INT(NSMassFormatter ,NSNumberFormatter *,numberFormatter);
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,long long,unitStyle);
TF_EC_CHAIN_PROP_INT(NSMassFormatter ,BOOL,forPersonMassUse);

@end