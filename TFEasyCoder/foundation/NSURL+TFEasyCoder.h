//
//  NSURL+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSURL,NSURL *);

@interface NSURL (TFEasyCoder)

TF_EC_MSTATIC_INT(NSURL, NSURL *);
TF_EC_MINSTANCE_INT(NSURL,NSURL *);



@end