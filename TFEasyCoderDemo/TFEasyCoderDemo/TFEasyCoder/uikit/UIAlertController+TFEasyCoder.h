//
//  UIAlertController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIAlertController,UIAlertController *);

@interface UIAlertController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIAlertController, UIAlertController *);
TF_EC_MINSTANCE_INT(UIAlertController,UIAlertController *);


TF_EC_CHAIN_PROP_INT(UIAlertController ,UIAlertAction *,preferredAction)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,title)
TF_EC_CHAIN_PROP_INT(UIAlertController ,NSString *,message)


@end