//
//  NSLayoutManager+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSLayoutManager,NSLayoutManager *);

@interface NSLayoutManager (TFEasyCoder)

TF_EC_MSTATIC_INT(NSLayoutManager, NSLayoutManager *);
TF_EC_MINSTANCE_INT(NSLayoutManager,NSLayoutManager *);


TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSTextStorage *,textStorage);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,id<NSLayoutManagerDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,showsInvisibleCharacters);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,showsControlCharacters);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,double,hyphenationFactor);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,usesFontLeading);
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,allowsNonContiguousLayout);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSLayoutManager ,long long,accessibilityNavigationStyle)





@end