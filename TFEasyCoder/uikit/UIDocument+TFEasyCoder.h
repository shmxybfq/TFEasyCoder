//
//  UIDocument+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIDocument,UIDocument *);

@interface UIDocument (TFEasyCoder)

TF_EC_MSTATIC_INT(UIDocument, UIDocument *);
TF_EC_MINSTANCE_INT(UIDocument,UIDocument *);


TF_EC_CHAIN_PROP_INT(UIDocument ,NSDate *,fileModificationDate);
TF_EC_CHAIN_PROP_INT(UIDocument ,NSUndoManager *,undoManager);


@end