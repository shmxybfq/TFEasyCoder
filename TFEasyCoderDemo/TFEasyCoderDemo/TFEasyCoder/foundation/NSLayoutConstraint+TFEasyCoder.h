//
//  NSLayoutConstraint+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutConstraint,NSLayoutConstraint *);

@interface NSLayoutConstraint (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutConstraint, NSLayoutConstraint *);
TF_EC_MINSTANCE_INT(NSLayoutConstraint,NSLayoutConstraint *);

TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,float,priority)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,shouldBeArchived)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,double,constant)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,BOOL,active)
TF_EC_CHAIN_PROP_INT(NSLayoutConstraint ,NSString *,identifier)

@end