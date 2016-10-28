//
//  UITextView+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import "TFEasyCoderConst.h"

TF_EC_BLOCK(UITextView,UITextView *);

@interface UITextView (TFEasyCoder)

TF_EC_MSTATIC_INT(UITextView, UITextView *);
TF_EC_MINSTANCE_INT(UITextView,UITextView *);


TF_EC_CHAIN_PROP_INT(UITextView ,id<UITextViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_INT(UITextView ,NSString *,text)
TF_EC_CHAIN_PROP_INT(UITextView ,UIFont *,font)
TF_EC_CHAIN_PROP_INT(UITextView ,UIColor *,textColor)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,textAlignment)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,editable)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,selectable)
TF_EC_CHAIN_PROP_INT(UITextView ,unsigned long long,dataDetectorTypes)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,allowsEditingTextAttributes)
TF_EC_CHAIN_PROP_INT(UITextView ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_INT(UITextView ,NSDictionary *,typingAttributes)
TF_EC_CHAIN_PROP_INT(UITextView ,UIView *,inputView)
TF_EC_CHAIN_PROP_INT(UITextView ,UIView *,inputAccessoryView)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,clearsOnInsertion)
TF_EC_CHAIN_PROP_INT(UITextView ,UIEdgeInsets,textContainerInset)
TF_EC_CHAIN_PROP_INT(UITextView ,NSDictionary *,linkTextAttributes)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,autocapitalizationType)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,autocorrectionType)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,spellCheckingType)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,keyboardType)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,keyboardAppearance)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,returnKeyType)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,enablesReturnKeyAutomatically)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,secureTextEntry)
TF_EC_CHAIN_PROP_INT(UITextView ,NSDictionary *,markedTextStyle)
TF_EC_CHAIN_PROP_INT(UITextView ,id<UITextInputDelegate>  ,inputDelegate)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,selectionAffinity)


@end