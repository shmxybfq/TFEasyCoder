//
//  NSInputStream+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSInputStream,NSInputStream *);

@interface NSInputStream (TFEasyCoder)

TF_EC_MSTATIC_INT(NSInputStream, NSInputStream *);
TF_EC_MINSTANCE_INT(NSInputStream,NSInputStream *);



@end