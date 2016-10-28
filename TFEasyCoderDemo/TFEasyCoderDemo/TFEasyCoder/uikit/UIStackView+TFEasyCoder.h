//
//  UIStackView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIStackView,UIStackView *);

@interface UIStackView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIStackView, UIStackView *);
TF_EC_MINSTANCE_INT(UIStackView,UIStackView *);


TF_EC_CHAIN_PROP_INT(UIStackView ,long long,axis);
TF_EC_CHAIN_PROP_INT(UIStackView ,long long,distribution);
TF_EC_CHAIN_PROP_INT(UIStackView ,long long,alignment);
TF_EC_CHAIN_PROP_INT(UIStackView ,double,spacing);

@end