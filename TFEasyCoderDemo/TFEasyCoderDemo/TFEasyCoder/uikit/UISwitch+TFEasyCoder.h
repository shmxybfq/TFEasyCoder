//
//  UISwitch+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISwitch,UISwitch *);

@interface UISwitch (TFEasyCoder)

TF_EC_MSTATIC_INT(UISwitch, UISwitch *);
TF_EC_MINSTANCE_INT(UISwitch,UISwitch *);


TF_EC_CHAIN_PROP_INT(UISwitch ,UIColor *,onTintColor);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIColor *,tintColor);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIColor *,thumbTintColor);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIImage *,onImage);
TF_EC_CHAIN_PROP_INT(UISwitch ,UIImage *,offImage);
TF_EC_CHAIN_PROP_INT(UISwitch ,BOOL,on);


@end