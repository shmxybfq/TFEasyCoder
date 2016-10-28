//
//  UIPrintPageRenderer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPrintPageRenderer,UIPrintPageRenderer *);

@interface UIPrintPageRenderer (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPrintPageRenderer, UIPrintPageRenderer *);
TF_EC_MINSTANCE_INT(UIPrintPageRenderer,UIPrintPageRenderer *);


TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,double,headerHeight);
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,double,footerHeight);
TF_EC_CHAIN_PROP_INT(UIPrintPageRenderer ,NSArray *,printFormatters);

@end