//
//  UIDocumentMenuViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDocumentMenuViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDocumentMenuViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDocumentMenuViewController, UIDocumentMenuViewController *);
TF_EC_MINSTANCE_IMP(UIDocumentMenuViewController, UIDocumentMenuViewController *);


TF_EC_CHAIN_PROP_IMP(UIDocumentMenuViewController ,id<UIDocumentMenuDelegate>  ,delegate)


@end