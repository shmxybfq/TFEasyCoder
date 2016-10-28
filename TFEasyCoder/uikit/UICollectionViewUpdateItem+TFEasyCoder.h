//
//  UICollectionViewUpdateItem+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewUpdateItem,UICollectionViewUpdateItem *);

@interface UICollectionViewUpdateItem (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewUpdateItem, UICollectionViewUpdateItem *);
TF_EC_MINSTANCE_INT(UICollectionViewUpdateItem,UICollectionViewUpdateItem *);


@end