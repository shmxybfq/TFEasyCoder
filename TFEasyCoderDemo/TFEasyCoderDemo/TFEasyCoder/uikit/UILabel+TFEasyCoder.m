//
//  UILabel+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UILabel+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UILabel (TFEasyCoder)

TF_EC_MSTATIC_IMP(UILabel, UILabel *);
TF_EC_MINSTANCE_IMP(UILabel, UILabel *);


TF_EC_CHAIN_PROP_IMP(UILabel ,NSString *,text)
TF_EC_CHAIN_PROP_IMP(UILabel ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UILabel ,UIColor *,textColor)
TF_EC_CHAIN_PROP_IMP(UILabel ,UIColor *,shadowColor)
TF_EC_CHAIN_PROP_IMP(UILabel ,CGSize,shadowOffset)
TF_EC_CHAIN_PROP_IMP(UILabel ,long long,textAlignment)
TF_EC_CHAIN_PROP_IMP(UILabel ,long long,lineBreakMode)
TF_EC_CHAIN_PROP_IMP(UILabel ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_IMP(UILabel ,UIColor *,highlightedTextColor)
TF_EC_CHAIN_PROP_IMP(UILabel ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UILabel ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UILabel ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UILabel ,long long,numberOfLines)
TF_EC_CHAIN_PROP_IMP(UILabel ,BOOL,adjustsFontSizeToFitWidth)
TF_EC_CHAIN_PROP_IMP(UILabel ,long long,baselineAdjustment)
TF_EC_CHAIN_PROP_IMP(UILabel ,double,minimumScaleFactor)
TF_EC_CHAIN_PROP_IMP(UILabel ,BOOL,allowsDefaultTighteningForTruncation)
TF_EC_CHAIN_PROP_IMP(UILabel ,double,preferredMaxLayoutWidth)
TF_EC_CHAIN_PROP_IMP(UILabel ,double,minimumFontSize)
TF_EC_CHAIN_PROP_IMP(UILabel ,BOOL,adjustsLetterSpacingToFitWidth)


@end