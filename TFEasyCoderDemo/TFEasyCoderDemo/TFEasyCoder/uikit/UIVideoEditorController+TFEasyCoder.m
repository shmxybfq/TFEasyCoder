//
//  UIVideoEditorController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIVideoEditorController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIVideoEditorController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIVideoEditorController, UIVideoEditorController *);
TF_EC_MINSTANCE_IMP(UIVideoEditorController, UIVideoEditorController *);


TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,id ,delegate)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,NSString *,videoPath)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,double,videoMaximumDuration)
TF_EC_CHAIN_PROP_IMP(UIVideoEditorController ,long long,videoQuality)

@end