//
//  UICollectionView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionView,UICollectionView *);

@interface UICollectionView (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionView, UICollectionView *);
TF_EC_MINSTANCE_INT(UICollectionView,UICollectionView *);


TF_EC_CHAIN_PROP_INT(UICollectionView ,UICollectionViewLayout *,collectionViewLayout);
TF_EC_CHAIN_PROP_INT(UICollectionView ,id<UICollectionViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UICollectionView ,id<UICollectionViewDataSource> ,dataSource);
TF_EC_CHAIN_PROP_INT(UICollectionView ,UIView *,backgroundView);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,allowsSelection);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,allowsMultipleSelection);
TF_EC_CHAIN_PROP_INT(UICollectionView ,BOOL,remembersLastFocusedIndexPath);


@end