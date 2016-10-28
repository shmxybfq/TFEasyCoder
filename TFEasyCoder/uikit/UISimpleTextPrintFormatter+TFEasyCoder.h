//
//  UISimpleTextPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISimpleTextPrintFormatter,UISimpleTextPrintFormatter *);

@interface UISimpleTextPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(UISimpleTextPrintFormatter, UISimpleTextPrintFormatter *);
TF_EC_MINSTANCE_INT(UISimpleTextPrintFormatter,UISimpleTextPrintFormatter *);


TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSString *,text);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,NSAttributedString *,attributedText);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,UIFont *,font);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,UIColor *,color);
TF_EC_CHAIN_PROP_INT(UISimpleTextPrintFormatter ,long long,textAlignment);

@end