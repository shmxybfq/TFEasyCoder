//
//  UILabel+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UILabel,UILabel *);

@interface UILabel (TFEasyCoder)

TF_EC_MSTATIC_INT(UILabel, UILabel *);
TF_EC_MINSTANCE_INT(UILabel,UILabel *);


TF_EC_CHAIN_PROP_INT(UILabel ,NSString *,text);
TF_EC_CHAIN_PROP_INT(UILabel ,UIFont *,font);
TF_EC_CHAIN_PROP_INT(UILabel ,UIColor *,textColor);
TF_EC_CHAIN_PROP_INT(UILabel ,UIColor *,shadowColor);
TF_EC_CHAIN_PROP_INT(UILabel ,CGSize,shadowOffset);
TF_EC_CHAIN_PROP_INT(UILabel ,long long,textAlignment);
TF_EC_CHAIN_PROP_INT(UILabel ,long long,lineBreakMode);
TF_EC_CHAIN_PROP_INT(UILabel ,NSAttributedString *,attributedText);
TF_EC_CHAIN_PROP_INT(UILabel ,UIColor *,highlightedTextColor);
TF_EC_CHAIN_PROP_INT(UILabel ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UILabel ,BOOL,userInteractionEnabled);
TF_EC_CHAIN_PROP_INT(UILabel ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UILabel ,long long,numberOfLines);
TF_EC_CHAIN_PROP_INT(UILabel ,BOOL,adjustsFontSizeToFitWidth);
TF_EC_CHAIN_PROP_INT(UILabel ,long long,baselineAdjustment);
TF_EC_CHAIN_PROP_INT(UILabel ,double,minimumScaleFactor);
TF_EC_CHAIN_PROP_INT(UILabel ,BOOL,allowsDefaultTighteningForTruncation);
TF_EC_CHAIN_PROP_INT(UILabel ,double,preferredMaxLayoutWidth);
TF_EC_CHAIN_PROP_INT(UILabel ,double,minimumFontSize);
TF_EC_CHAIN_PROP_INT(UILabel ,BOOL,adjustsLetterSpacingToFitWidth);


@end