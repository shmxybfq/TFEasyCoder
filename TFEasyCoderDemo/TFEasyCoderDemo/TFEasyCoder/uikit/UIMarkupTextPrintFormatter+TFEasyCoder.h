//
//  UIMarkupTextPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIMarkupTextPrintFormatter,UIMarkupTextPrintFormatter *);

@interface UIMarkupTextPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(UIMarkupTextPrintFormatter, UIMarkupTextPrintFormatter *);
TF_EC_MINSTANCE_INT(UIMarkupTextPrintFormatter,UIMarkupTextPrintFormatter *);


TF_EC_CHAIN_PROP_INT(UIMarkupTextPrintFormatter ,NSString *,markupText);

@end