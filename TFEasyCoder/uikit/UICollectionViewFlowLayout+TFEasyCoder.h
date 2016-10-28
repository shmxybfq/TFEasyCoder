//
//  UICollectionViewFlowLayout+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewFlowLayout,UICollectionViewFlowLayout *);

@interface UICollectionViewFlowLayout (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewFlowLayout, UICollectionViewFlowLayout *);
TF_EC_MINSTANCE_INT(UICollectionViewFlowLayout,UICollectionViewFlowLayout *);


TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,double,minimumLineSpacing);
TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,double,minimumInteritemSpacing);
TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,CGSize,itemSize);
TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,CGSize,estimatedItemSize);
TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,long long,scrollDirection);
TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,UIEdgeInsets,sectionInset);
TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,BOOL,sectionHeadersPinToVisibleBounds);
TF_EC_CHAIN_PROP_INT(UICollectionViewFlowLayout ,BOOL,sectionFootersPinToVisibleBounds);

@end