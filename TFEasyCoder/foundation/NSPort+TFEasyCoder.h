//
//  NSPort+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSPort,NSPort *);

@interface NSPort (TFEasyCoder)

TF_EC_MSTATIC_INT(NSPort, NSPort *);
TF_EC_MINSTANCE_INT(NSPort,NSPort *);



@end