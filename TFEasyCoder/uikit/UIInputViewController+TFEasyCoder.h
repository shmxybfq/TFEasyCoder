//
//  UIInputViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIInputViewController,UIInputViewController *);

@interface UIInputViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIInputViewController, UIInputViewController *);
TF_EC_MINSTANCE_INT(UIInputViewController,UIInputViewController *);


TF_EC_CHAIN_PROP_INT(UIInputViewController ,UIInputView *,inputView);
TF_EC_CHAIN_PROP_INT(UIInputViewController ,NSString *,primaryLanguage);

@end