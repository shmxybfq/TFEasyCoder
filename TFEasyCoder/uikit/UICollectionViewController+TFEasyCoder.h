//
//  UICollectionViewController+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewController,UICollectionViewController *);

@interface UICollectionViewController (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewController, UICollectionViewController *);
TF_EC_MINSTANCE_INT(UICollectionViewController,UICollectionViewController *);


TF_EC_CHAIN_PROP_INT(UICollectionViewController ,UICollectionView *,collectionView);
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,clearsSelectionOnViewWillAppear);
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,useLayoutToLayoutNavigationTransitions);
TF_EC_CHAIN_PROP_INT(UICollectionViewController ,BOOL,installsStandardGestureForInteractiveMovement);

@end