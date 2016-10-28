//
//  UILayoutGuide+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILayoutGuide,UILayoutGuide *);

@interface UILayoutGuide (TFEasyCoder)

TF_EC_MSTATIC_INT(UILayoutGuide, UILayoutGuide *);
TF_EC_MINSTANCE_INT(UILayoutGuide,UILayoutGuide *);


TF_EC_CHAIN_PROP_INT(UILayoutGuide ,UIView *,owningView);
TF_EC_CHAIN_PROP_INT(UILayoutGuide ,NSString *,identifier);

@end