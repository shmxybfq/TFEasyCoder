//
//  NSTextContainer+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTextContainer,NSTextContainer *);

@interface NSTextContainer (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTextContainer, NSTextContainer *);
TF_EC_MINSTANCE_INT(NSTextContainer,NSTextContainer *);


TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSLayoutManager *,layoutManager);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,CGSize,size);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSArray *,exclusionPaths);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,long long,lineBreakMode);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,double,lineFragmentPadding);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,unsigned long long,maximumNumberOfLines);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,widthTracksTextView);
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,heightTracksTextView);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSTextContainer ,long long,accessibilityNavigationStyle)





@end