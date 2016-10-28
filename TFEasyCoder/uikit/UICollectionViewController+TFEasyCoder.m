//
//  UICollectionViewController+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewController+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewController (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewController, UICollectionViewController *);
TF_EC_MINSTANCE_IMP(UICollectionViewController, UICollectionViewController *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,UICollectionView *,collectionView)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,clearsSelectionOnViewWillAppear)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,useLayoutToLayoutNavigationTransitions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewController ,BOOL,installsStandardGestureForInteractiveMovement)

@end