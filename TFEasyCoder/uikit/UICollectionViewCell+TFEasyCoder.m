//
//  UICollectionViewCell+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewCell+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewCell (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewCell, UICollectionViewCell *);
TF_EC_MINSTANCE_IMP(UICollectionViewCell, UICollectionViewCell *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,UIView *,backgroundView)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,UIView *,selectedBackgroundView)

@end