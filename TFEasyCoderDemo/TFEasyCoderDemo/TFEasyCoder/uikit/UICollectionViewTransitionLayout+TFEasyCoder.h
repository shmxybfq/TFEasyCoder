//
//  UICollectionViewTransitionLayout+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewTransitionLayout,UICollectionViewTransitionLayout *);

@interface UICollectionViewTransitionLayout (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewTransitionLayout, UICollectionViewTransitionLayout *);
TF_EC_MINSTANCE_INT(UICollectionViewTransitionLayout,UICollectionViewTransitionLayout *);


TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,double,transitionProgress);

@end