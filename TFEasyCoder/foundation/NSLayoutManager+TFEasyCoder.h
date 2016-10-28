//
//  NSLayoutManager+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutManager,NSLayoutManager *);

@interface NSLayoutManager (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutManager, NSLayoutManager *);
TF_EC_MINSTANCE_INT(NSLayoutManager,NSLayoutManager *);


TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSTextStorage *,textStorage);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,id<NSLayoutManagerDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,showsInvisibleCharacters);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,showsControlCharacters);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,double,hyphenationFactor);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,usesFontLeading);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,allowsNonContiguousLayout);

@end