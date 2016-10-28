//
//  NSURLSessionTask+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURLSessionTask,NSURLSessionTask *);

@interface NSURLSessionTask (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURLSessionTask, NSURLSessionTask *);
TF_EC_MINSTANCE_INT(NSURLSessionTask,NSURLSessionTask *);



TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,NSString *,taskDescription)
TF_EC_CHAIN_PROP_INT(NSURLSessionTask ,float,priority)

@end