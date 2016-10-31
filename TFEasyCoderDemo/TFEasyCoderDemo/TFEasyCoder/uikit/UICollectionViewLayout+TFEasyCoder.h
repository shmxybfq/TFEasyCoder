//
//  UICollectionViewLayout+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewLayout,UICollectionViewLayout *);

@interface UICollectionViewLayout (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewLayout, UICollectionViewLayout *);
TF_EC_MINSTANCE_INT(UICollectionViewLayout,UICollectionViewLayout *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayout ,long long,accessibilityNavigationStyle)





@end