//
//  UICollectionViewCell+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UICollectionViewCell+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UICollectionViewCell (TFEasyCoder)

TF_EC_MSTATIC_IMP(UICollectionViewCell, UICollectionViewCell *);
TF_EC_MINSTANCE_IMP(UICollectionViewCell, UICollectionViewCell *);


TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,UIView *,backgroundView)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,UIView *,selectedBackgroundView)




//superclass pros UICollectionReusableView
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UICollectionViewCell ,long long,accessibilityNavigationStyle)





@end