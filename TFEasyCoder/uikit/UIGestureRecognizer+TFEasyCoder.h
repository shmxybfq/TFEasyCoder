//
//  UIGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIGestureRecognizer,UIGestureRecognizer *);

@interface UIGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIGestureRecognizer, UIGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIGestureRecognizer,UIGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,cancelsTouchesInView);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,delaysTouchesBegan);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,BOOL,delaysTouchesEnded);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSArray *,allowedTouchTypes);
TF_EC_CHAIN_PROP_INT(UIGestureRecognizer ,NSArray *,allowedPressTypes);

@end