//
//  UICollectionViewLayoutAttributes+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewLayoutAttributes,UICollectionViewLayoutAttributes *);

@interface UICollectionViewLayoutAttributes (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewLayoutAttributes, UICollectionViewLayoutAttributes *);
TF_EC_MINSTANCE_INT(UICollectionViewLayoutAttributes,UICollectionViewLayoutAttributes *);


TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,CGPoint,center);
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,CGSize,size);
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,CATransform3D,transform3D)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,CGAffineTransform,transform)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,double,alpha);
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,long long,zIndex);
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,BOOL,hidden);
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,NSIndexPath *,indexPath);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutAttributes ,long long,accessibilityNavigationStyle)





@end