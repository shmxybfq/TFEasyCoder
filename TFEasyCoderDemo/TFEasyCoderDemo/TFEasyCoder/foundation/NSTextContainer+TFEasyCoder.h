//
//  NSTextContainer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTextContainer,NSTextContainer *);

@interface NSTextContainer (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTextContainer, NSTextContainer *);
TF_EC_MINSTANCE_INT(NSTextContainer,NSTextContainer *);


TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSLayoutManager *,layoutManager);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,CGSize,size);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSArray *,exclusionPaths);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,long long,lineBreakMode);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,double,lineFragmentPadding);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,unsigned long long,maximumNumberOfLines);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,widthTracksTextView);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,heightTracksTextView);

@end