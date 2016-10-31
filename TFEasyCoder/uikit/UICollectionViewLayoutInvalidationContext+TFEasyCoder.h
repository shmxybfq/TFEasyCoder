//
//  UICollectionViewLayoutInvalidationContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewLayoutInvalidationContext,UICollectionViewLayoutInvalidationContext *);

@interface UICollectionViewLayoutInvalidationContext (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewLayoutInvalidationContext, UICollectionViewLayoutInvalidationContext *);
TF_EC_MINSTANCE_INT(UICollectionViewLayoutInvalidationContext,UICollectionViewLayoutInvalidationContext *);


TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,CGPoint,contentOffsetAdjustment)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,CGSize,contentSizeAdjustment)




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewLayoutInvalidationContext ,long long,accessibilityNavigationStyle)





@end