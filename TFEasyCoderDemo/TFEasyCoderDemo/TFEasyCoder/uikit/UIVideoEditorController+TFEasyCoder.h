//
//  UIVideoEditorController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIVideoEditorController,UIVideoEditorController *);

@interface UIVideoEditorController (TFEasyCoder)

TF_EC_MSTATIC_INT(UIVideoEditorController, UIVideoEditorController *);
TF_EC_MINSTANCE_INT(UIVideoEditorController,UIVideoEditorController *);


TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,id ,delegate);
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,NSString *,videoPath);
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,double,videoMaximumDuration);
TF_EC_CHAIN_PROP_INT(UIVideoEditorController ,long long,videoQuality);

@end