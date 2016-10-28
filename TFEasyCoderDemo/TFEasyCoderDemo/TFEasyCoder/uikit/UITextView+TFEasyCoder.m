//
//  UITextView+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITextView+TFEasyCoder.h"
#import "NSObject+TFExecute.h"

@implementation UITextView (TFEasyCoder)

TF_EC_MSTATIC_IMP(UITextView, UITextView *);
TF_EC_MINSTANCE_IMP(UITextView, UITextView *);


TF_EC_CHAIN_PROP_IMP(UITextView ,id<UITextViewDelegate>  ,delegate)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSString *,text)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIFont *,font)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIColor *,textColor)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,textAlignment)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,editable)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,selectable)
TF_EC_CHAIN_PROP_IMP(UITextView ,unsigned long long,dataDetectorTypes)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,allowsEditingTextAttributes)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSAttributedString *,attributedText)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSDictionary *,typingAttributes)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIView *,inputView)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIView *,inputAccessoryView)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,clearsOnInsertion)
TF_EC_CHAIN_PROP_IMP(UITextView ,UIEdgeInsets,textContainerInset)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSDictionary *,linkTextAttributes)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,autocapitalizationType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,autocorrectionType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,spellCheckingType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,keyboardType)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,keyboardAppearance)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,returnKeyType)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,enablesReturnKeyAutomatically)
TF_EC_CHAIN_PROP_IMP(UITextView ,BOOL,secureTextEntry)
TF_EC_CHAIN_PROP_IMP(UITextView ,NSDictionary *,markedTextStyle)
TF_EC_CHAIN_PROP_IMP(UITextView ,id<UITextInputDelegate>  ,inputDelegate)
TF_EC_CHAIN_PROP_IMP(UITextView ,long long,selectionAffinity)

@end