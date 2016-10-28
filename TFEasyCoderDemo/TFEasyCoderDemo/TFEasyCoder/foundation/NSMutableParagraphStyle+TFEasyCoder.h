//
//  NSMutableParagraphStyle+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSMutableParagraphStyle,NSMutableParagraphStyle *);

@interface NSMutableParagraphStyle (TFEasyCoder)

TF_EC_MSTATIC_INT(NSMutableParagraphStyle, NSMutableParagraphStyle *);
TF_EC_MINSTANCE_INT(NSMutableParagraphStyle,NSMutableParagraphStyle *);


TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,lineSpacing);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,paragraphSpacing);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,long long,alignment);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,firstLineHeadIndent);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,headIndent);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,tailIndent);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,long long,lineBreakMode);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,minimumLineHeight);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,maximumLineHeight);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,long long,baseWritingDirection);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,lineHeightMultiple);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,paragraphSpacingBefore);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,float,hyphenationFactor);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,NSArray *,tabStops);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,double,defaultTabInterval);
TF_EC_CHAIN_PROP_INT(NSMutableParagraphStyle ,BOOL,allowsDefaultTighteningForTruncation);

@end