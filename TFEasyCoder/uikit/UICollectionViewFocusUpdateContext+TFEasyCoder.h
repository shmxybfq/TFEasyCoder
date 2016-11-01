//
//  UICollectionViewFocusUpdateContext+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewFocusUpdateContext,UICollectionViewFocusUpdateContext *);

@interface UICollectionViewFocusUpdateContext (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewFocusUpdateContext, UICollectionViewFocusUpdateContext *);
TF_EC_MINSTANCE_INT(UICollectionViewFocusUpdateContext,UICollectionViewFocusUpdateContext *);






//superclass pros UIFocusUpdateContext
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewFocusUpdateContext ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UICollectionViewFocusUpdateContext);


@end