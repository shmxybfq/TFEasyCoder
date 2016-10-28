//
//  NSLinguisticTagger+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLinguisticTagger,NSLinguisticTagger *);

@interface NSLinguisticTagger (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLinguisticTagger, NSLinguisticTagger *);
TF_EC_MINSTANCE_INT(NSLinguisticTagger,NSLinguisticTagger *);


TF_EC_CHAIN_PROP_INT(NSLinguisticTagger ,NSString *,string);

@end