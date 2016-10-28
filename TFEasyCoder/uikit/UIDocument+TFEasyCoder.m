//
//  UIDocument+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIDocument+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIDocument (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIDocument, UIDocument *);
TF_EC_MINSTANCE_IMP(UIDocument, UIDocument *);


TF_EC_CHAIN_PROP_IMP(UIDocument ,NSDate *,fileModificationDate)
TF_EC_CHAIN_PROP_IMP(UIDocument ,NSUndoManager *,undoManager)

@end