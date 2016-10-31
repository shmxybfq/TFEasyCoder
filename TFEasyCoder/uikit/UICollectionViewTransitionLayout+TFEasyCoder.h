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




//superclass pros UICollectionViewLayout
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewTransitionLayout ,long long,accessibilityNavigationStyle)





@end