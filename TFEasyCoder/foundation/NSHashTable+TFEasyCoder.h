//
//  NSHashTable+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSHashTable,NSHashTable *);

@interface NSHashTable (TFEasyCoder)

TF_EC_MSTATIC_INT(NSHashTable, NSHashTable *);
TF_EC_MINSTANCE_INT(NSHashTable,NSHashTable *);



@end