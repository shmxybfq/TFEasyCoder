//
//  NSDate+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDate,NSDate *);

@interface NSDate (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDate, NSDate *);
TF_EC_MINSTANCE_INT(NSDate,NSDate *);



@end