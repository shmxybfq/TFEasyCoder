//
//  NSTextAttachment+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(NSTextAttachment,NSTextAttachment *);

@interface NSTextAttachment (TFEasyCoder)

TF_EC_MSTATIC_INT(NSTextAttachment, NSTextAttachment *);
TF_EC_MINSTANCE_INT(NSTextAttachment,NSTextAttachment *);


TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSData *,contents);
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSString *,fileType);
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,UIImage *,image);
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSFileWrapper *,fileWrapper);




//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(NSTextAttachment ,long long,accessibilityNavigationStyle)





@end