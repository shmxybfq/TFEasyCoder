//
//  CATextLayer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(CATextLayer,CATextLayer *);

@interface CATextLayer (TFEasyCoder)

TF_EC_MSTATIC_INT(CATextLayer, CATextLayer *);
TF_EC_MINSTANCE_INT(CATextLayer,CATextLayer *);


TF_EC_CHAIN_PROP_INT(CATextLayer ,CFTypeRef,font);
TF_EC_CHAIN_PROP_INT(CATextLayer ,double,fontSize);
TF_EC_CHAIN_PROP_INT(CATextLayer ,CGColorRef,foregroundColor);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,wrapped);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,truncationMode);
TF_EC_CHAIN_PROP_INT(CATextLayer ,NSString *,alignmentMode);
TF_EC_CHAIN_PROP_INT(CATextLayer ,BOOL,allowsFontSubpixelQuantization);

@end