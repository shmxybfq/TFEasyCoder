//
//  NSMutableOrderedSet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableOrderedSet,NSMutableOrderedSet *);

@interface NSMutableOrderedSet (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableOrderedSet, NSMutableOrderedSet *);
TF_EC_MINSTANCE_INT(NSMutableOrderedSet,NSMutableOrderedSet *);



@end