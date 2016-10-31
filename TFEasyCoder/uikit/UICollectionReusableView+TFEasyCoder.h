//
//  UICollectionReusableView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionReusableView,UICollectionReusableView *);

@interface UICollectionReusableView (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionReusableView, UICollectionReusableView *);
TF_EC_MINSTANCE_INT(UICollectionReusableView,UICollectionReusableView *);






//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionReusableView ,long long,accessibilityNavigationStyle)





@end