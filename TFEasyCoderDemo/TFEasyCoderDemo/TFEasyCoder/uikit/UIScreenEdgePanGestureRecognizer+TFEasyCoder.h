//
//  UIScreenEdgePanGestureRecognizer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIScreenEdgePanGestureRecognizer,UIScreenEdgePanGestureRecognizer *);

@interface UIScreenEdgePanGestureRecognizer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIScreenEdgePanGestureRecognizer, UIScreenEdgePanGestureRecognizer *);
TF_EC_MINSTANCE_INT(UIScreenEdgePanGestureRecognizer,UIScreenEdgePanGestureRecognizer *);


TF_EC_CHAIN_PROP_INT(UIScreenEdgePanGestureRecognizer ,unsigned long long,edges);

@end