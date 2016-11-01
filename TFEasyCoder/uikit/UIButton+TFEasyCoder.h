//
//  UIButton+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIButton,UIButton *);

@interface UIButton (TFEasyCoder)

TF_EC_MSTATIC_INT(UIButton, UIButton *);
TF_EC_MINSTANCE_INT(UIButton,UIButton *);


TF_EC_CHAIN_PROP_INT(UIButton ,UIEdgeInsets,contentEdgeInsets);
TF_EC_CHAIN_PROP_INT(UIButton ,UIEdgeInsets,titleEdgeInsets);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,reversesTitleShadowWhenHighlighted);
TF_EC_CHAIN_PROP_INT(UIButton ,UIEdgeInsets,imageEdgeInsets);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,adjustsImageWhenHighlighted);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,adjustsImageWhenDisabled);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,showsTouchWhenHighlighted);
TF_EC_CHAIN_PROP_INT(UIButton ,UIColor *,tintColor);

TF_EC_CHAIN_PROP_INT(UIButton ,UIFont *,font)
TF_EC_CHAIN_PROP_INT(UIButton ,NSLineBreakMode ,lineBreakMode)
TF_EC_CHAIN_PROP_INT(UIButton ,CGSize ,titleShadowOffset)




//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIButton ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UIButton ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIButton ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIButton ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIButton ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIButton ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIButton ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIButton ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIButton ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIButton ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIButton ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIButton ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIButton ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIButton ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIButton ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIButton ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIButton ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIButton ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIButton ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIButton ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_INT(UIButton);


@end
