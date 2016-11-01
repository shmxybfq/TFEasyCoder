//
//  UIPageControl+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIPageControl,UIPageControl *);

@interface UIPageControl (TFEasyCoder)

TF_EC_MSTATIC_INT(UIPageControl, UIPageControl *);
TF_EC_MINSTANCE_INT(UIPageControl,UIPageControl *);


TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,numberOfPages);
TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,currentPage);
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,hidesForSinglePage);
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,defersCurrentPageDisplay);
TF_EC_CHAIN_PROP_INT(UIPageControl ,UIColor *,pageIndicatorTintColor);
TF_EC_CHAIN_PROP_INT(UIPageControl ,UIColor *,currentPageIndicatorTintColor);





//superclass pros UIControl
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,enabled);
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,selected);
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,highlighted);
TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,contentVerticalAlignment);
TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,contentHorizontalAlignment);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UIPageControl ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,tag)
TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UIPageControl ,CGPoint,center)
TF_EC_CHAIN_PROP_INT(UIPageControl ,CGRect,frame)
TF_EC_CHAIN_PROP_INT(UIPageControl ,UIColor *,backgroundColor)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UIPageControl ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIPageControl ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIPageControl ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIPageControl ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIPageControl ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIPageControl ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIPageControl ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIPageControl ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIPageControl ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIPageControl ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIPageControl ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIPageControl ,long long,accessibilityNavigationStyle)





@end
