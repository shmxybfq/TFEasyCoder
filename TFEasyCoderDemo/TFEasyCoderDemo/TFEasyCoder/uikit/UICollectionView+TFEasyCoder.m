//
//  UICollectionView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionView, UICollectionView *);
TF_EC_MINSTANCE_IMP(UICollectionView, UICollectionView *);


TF_EC_CHAIN_PROP_IMP(UICollectionView ,UICollectionViewLayout *,collectionViewLayout)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,id<UICollectionViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,id<UICollectionViewDataSource>  ,dataSource)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,UIView *,backgroundView)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,allowsSelection)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,allowsMultipleSelection)
TF_EC_CHAIN_PROP_IMP(UICollectionView ,BOOL,remembersLastFocusedIndexPath)


@end