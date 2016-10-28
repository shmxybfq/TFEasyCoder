//
//  UIActionSheet+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"


TF_EC_BLOCK(UIActionSheet,UIActionSheet *);

@interface UIActionSheet (TFEasyCoder)

TF_EC_MSTATIC_INT(UIActionSheet, UIActionSheet *);
TF_EC_MINSTANCE_INT(UIActionSheet,UIActionSheet *);


TF_EC_CHAIN_PROP_INT(UIActionSheet ,id<UIActionSheetDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,NSString *,title);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,actionSheetStyle);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,cancelButtonIndex);
TF_EC_CHAIN_PROP_INT(UIActionSheet ,long long,destructiveButtonIndex);

@end