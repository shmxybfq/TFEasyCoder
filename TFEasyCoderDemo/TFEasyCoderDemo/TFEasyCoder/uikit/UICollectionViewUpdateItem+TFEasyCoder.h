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





//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewUpdateItem ,long long,accessibilityNavigationStyle)





@end