//
//  UIPrintFormatter+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrintFormatter,UIPrintFormatter *);

@interface UIPrintFormatter (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrintFormatter, UIPrintFormatter *);
TF_EC_MINSTANCE_INT(UIPrintFormatter,UIPrintFormatter *);


TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,double,maximumContentHeight);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,double,maximumContentWidth);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,UIEdgeInsets,contentInsets);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,UIEdgeInsets,perPageContentInsets);
TF_EC_CHAIN_PROP_INT(UIPrintFormatter ,long long,startPage);

@end