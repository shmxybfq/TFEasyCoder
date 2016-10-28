//
//  UIControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIControl,UIControl *);

@interface UIControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UIControl, UIControl *);
TF_EC_MINSTANCE_INT(UIControl,UIControl *);


TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UIControl ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIControl ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UIControl ,long long,contentHorizontalAlignment);

@end