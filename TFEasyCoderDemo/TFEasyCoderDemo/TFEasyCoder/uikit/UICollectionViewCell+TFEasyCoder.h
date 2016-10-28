//
//  UICollectionViewCell+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewCell,UICollectionViewCell *);

@interface UICollectionViewCell (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewCell, UICollectionViewCell *);
TF_EC_MINSTANCE_INT(UICollectionViewCell,UICollectionViewCell *);


TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,UIView *,backgroundView);
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,UIView *,selectedBackgroundView);

@end