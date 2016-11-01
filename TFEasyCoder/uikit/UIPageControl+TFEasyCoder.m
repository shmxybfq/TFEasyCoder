//
//  UIPageControl+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UIPageControl+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UIPageControl (TFEasyCoder)

TF_EC_MSTATIC_IMP(UIPageControl, UIPageControl *);
TF_EC_MINSTANCE_IMP(UIPageControl, UIPageControl *);


TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,numberOfPages)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,currentPage)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,hidesForSinglePage)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,defersCurrentPageDisplay)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,UIColor *,pageIndicatorTintColor)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,UIColor *,currentPageIndicatorTintColor)





//superclass pros UIControl
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,enabled)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,selected)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,highlighted)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,contentVerticalAlignment)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,contentHorizontalAlignment)
//superclass pros UIView
TF_EC_CHAIN_PROP_IMP(UIPageControl ,UIView *,maskView)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,tag)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,CGPoint,center)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,CGRect,frame)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_IMP(UIPageControl ,NSUserActivity *,userActivity)
//superclass pros NSObject
TF_EC_CHAIN_PROP_IMP(UIPageControl ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_IMP(UIPageControl ,long long,accessibilityNavigationStyle)





TF_EC_CHAIN_VALUEKYE_IMP(UIPageControl);


@end
