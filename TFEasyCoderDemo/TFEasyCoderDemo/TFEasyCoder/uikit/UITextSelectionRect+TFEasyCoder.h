//
//  UITextSelectionRect+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextSelectionRect,UITextSelectionRect *);

@interface UITextSelectionRect (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextSelectionRect, UITextSelectionRect *);
TF_EC_MINSTANCE_INT(UITextSelectionRect,UITextSelectionRect *);



@end