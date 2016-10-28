//
//  UIFocusGuide+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFocusGuide,UIFocusGuide *);

@interface UIFocusGuide (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFocusGuide, UIFocusGuide *);
TF_EC_MINSTANCE_INT(UIFocusGuide,UIFocusGuide *);


TF_EC_CHAIN_PROP_INT(UIFocusGuide ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIFocusGuide ,UIView *,preferredFocusedView);

@end