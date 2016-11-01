//
//  UICollectionReusableView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionReusableView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionReusableView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionReusableView, UICollectionReusableView *);
TF_EC_MINSTANCE_IMP(UICollectionReusableView, UICollectionReusableView *);






//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionReusableView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UICollectionReusableView);


@end
