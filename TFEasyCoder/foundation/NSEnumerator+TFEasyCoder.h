//
//  NSEnumerator+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSEnumerator,NSEnumerator *);

@interface NSEnumerator (TFEasyCoder)

TF_EC_MSTATIC_INT(NSEnumerator, NSEnumerator *);
TF_EC_MINSTANCE_INT(NSEnumerator,NSEnumerator *);



@end