//
//  UITapGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITapGestureRecognizer,UITapGestureRecognizer *);

@interface UITapGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UITapGestureRecognizer, UITapGestureRecognizer *);
TF_EC_MINSTANCE_INT(UITapGestureRecognizer,UITapGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,unsigned long long,numberOfTapsRequired);
TF_EC_CHAIN_PROP_INT(UITapGestureRecognizer ,unsigned long long,numberOfTouchesRequired);


@end