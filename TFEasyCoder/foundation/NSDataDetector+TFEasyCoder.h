//
//  NSDataDetector+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSDataDetector,NSDataDetector *);

@interface NSDataDetector (TFEasyCoder)

TF_EC_MSTATIC_INT(NSDataDetector, NSDataDetector *);
TF_EC_MINSTANCE_INT(NSDataDetector,NSDataDetector *);



@end