//
//  UISlider+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UISlider+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UISlider (TFEasyCoder)

TF_EC_MSTATIC_IMP(UISlider, UISlider *);
TF_EC_MINSTANCE_IMP(UISlider, UISlider *);


TF_EC_CHAIN_PROP_IMP(UISlider ,float,value)
TF_EC_CHAIN_PROP_IMP(UISlider ,float,minimumValue)
TF_EC_CHAIN_PROP_IMP(UISlider ,float,maximumValue)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIImage *,minimumValueImage)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIImage *,maximumValueImage)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,continuous)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIColor *,minimumTrackTintColor)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIColor *,maximumTrackTintColor)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIColor *,thumbTintColor)




//superclass pros UIControl
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UISlider ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UISlider ,long long,contentHorizontalAlignment)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UISlider ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UISlider ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UISlider ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UISlider ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UISlider ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UISlider ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UISlider ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UISlider ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UISlider ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UISlider ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UISlider ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UISlider ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UISlider ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UISlider ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UISlider ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UISlider ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UISlider ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UISlider);


@end
