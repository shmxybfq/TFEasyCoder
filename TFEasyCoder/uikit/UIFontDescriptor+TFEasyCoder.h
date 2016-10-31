//
//  UIFontDescriptor+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UIFontDescriptor,UIFontDescriptor *);

@interface UIFontDescriptor (TFEasyCoder)

TF_EC_MSTATIC_INT(UIFontDescriptor, UIFontDescriptor *);
TF_EC_MINSTANCE_INT(UIFontDescriptor,UIFontDescriptor *);






//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UIFontDescriptor ,long long,accessibilityNavigationStyle)





@end