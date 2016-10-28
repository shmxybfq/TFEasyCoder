//
//  UIScreen+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIScreen,UIScreen *);

@interface UIScreen (TFEasyCoder)

TF_EC_MSTATIC_INT(UIScreen, UIScreen *);
TF_EC_MINSTANCE_INT(UIScreen,UIScreen *);

TF_EC_CHAIN_PROP_INT(UIScreen ,UIScreenMode *,currentMode)
TF_EC_CHAIN_PROP_INT(UIScreen ,long long,overscanCompensation)
TF_EC_CHAIN_PROP_INT(UIScreen ,double,brightness)
TF_EC_CHAIN_PROP_INT(UIScreen ,BOOL,wantsSoftwareDimming)



@end