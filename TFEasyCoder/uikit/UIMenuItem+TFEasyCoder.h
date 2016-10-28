//
//  UIMenuItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMenuItem,UIMenuItem *);

@interface UIMenuItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMenuItem, UIMenuItem *);
TF_EC_MINSTANCE_INT(UIMenuItem,UIMenuItem *);


TF_EC_CHAIN_PROP_INT(UIMenuItem ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIMenuItem ,SEL,action);

@end