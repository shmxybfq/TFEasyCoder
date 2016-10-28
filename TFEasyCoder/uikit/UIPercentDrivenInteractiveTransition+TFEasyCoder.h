//
//  UIPercentDrivenInteractiveTransition+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPercentDrivenInteractiveTransition,UIPercentDrivenInteractiveTransition *);

@interface UIPercentDrivenInteractiveTransition (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPercentDrivenInteractiveTransition, UIPercentDrivenInteractiveTransition *);
TF_EC_MINSTANCE_INT(UIPercentDrivenInteractiveTransition,UIPercentDrivenInteractiveTransition *);


TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,double,completionSpeed);
TF_EC_CHAIN_PROP_INT(UIPercentDrivenInteractiveTransition ,long long,completionCurve);

@end