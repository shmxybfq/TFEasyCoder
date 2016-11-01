//
//  UIImageView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIImageView,UIImageView *);

@interface UIImageView (TFEasyCoder)

TF_EC_MSTATIC_INT(UIImageView, UIImageView *);
TF_EC_MINSTANCE_INT(UIImageView,UIImageView *);


TF_EC_CHAIN_PROP_INT(UIImageView ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(UIImageView ,UIImage *,highlightedImage);
//TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,userInteractionEnabled);
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIImageView ,NSArray *,animationImages);
TF_EC_CHAIN_PROP_INT(UIImageView ,NSArray *,highlightedAnimationImages);
TF_EC_CHAIN_PROP_INT(UIImageView ,double,animationDuration);
TF_EC_CHAIN_PROP_INT(UIImageView ,long long,animationRepeatCount);
TF_EC_CHAIN_PROP_INT(UIImageView ,UIColor *,tintColor);





//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIImageView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIImageView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIImageView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIImageView ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIImageView ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIImageView ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIImageView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIImageView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIImageView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIImageView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIImageView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIImageView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIImageView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIImageView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIImageView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIImageView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIImageView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIImageView ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIImageView);


@end
