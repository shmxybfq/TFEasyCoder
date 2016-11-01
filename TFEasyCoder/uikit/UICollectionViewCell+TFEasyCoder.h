//
//  UICollectionViewCell+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UICollectionViewCell,UICollectionViewCell *);

@interface UICollectionViewCell (TFEasyCoder)

TF_EC_MSTATIC_INT(UICollectionViewCell, UICollectionViewCell *);
TF_EC_MINSTANCE_INT(UICollectionViewCell,UICollectionViewCell *);


TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,UIView *,backgroundView);
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,UIView *,selectedBackgroundView);




//superclass pros UICollectionReusableView
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,long long,tag)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UICollectionViewCell ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UICollectionViewCell);


@end
