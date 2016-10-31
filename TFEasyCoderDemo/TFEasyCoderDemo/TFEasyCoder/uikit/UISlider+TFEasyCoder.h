//
//  UISlider+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UISlider,UISlider *);

@interface UISlider (TFEasyCoder)

TF_EC_MSTATIC_INT(UISlider, UISlider *);
TF_EC_MINSTANCE_INT(UISlider,UISlider *);


TF_EC_CHAIN_PROP_INT(UISlider ,float,value);
TF_EC_CHAIN_PROP_INT(UISlider ,float,minimumValue);
TF_EC_CHAIN_PROP_INT(UISlider ,float,maximumValue);
TF_EC_CHAIN_PROP_INT(UISlider ,UIImage *,minimumValueImage);
TF_EC_CHAIN_PROP_INT(UISlider ,UIImage *,maximumValueImage);
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,continuous);
TF_EC_CHAIN_PROP_INT(UISlider ,UIColor *,minimumTrackTintColor);
TF_EC_CHAIN_PROP_INT(UISlider ,UIColor *,maximumTrackTintColor);
TF_EC_CHAIN_PROP_INT(UISlider ,UIColor *,thumbTintColor);




//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UISlider ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UISlider ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UISlider ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UISlider ,long long,tag)
TF_EC_CHAIN_PROP_INT(UISlider ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UISlider ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UISlider ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UISlider ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UISlider ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UISlider ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UISlider ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UISlider ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UISlider ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UISlider ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UISlider ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UISlider ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UISlider ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UISlider ,long long,accessibilityNavigationStyle)





@end