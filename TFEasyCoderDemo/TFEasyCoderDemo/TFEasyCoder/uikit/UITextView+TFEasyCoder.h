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





//superclass pros UIScrollView
TF_EC_CHAIN_PROP_INT(UITextView ,CGPoint,contentOffset);
TF_EC_CHAIN_PROP_INT(UITextView ,CGSize,contentSize);
TF_EC_CHAIN_PROP_INT(UITextView ,UIEdgeInsets,contentInset);
//TF_EC_CHAIN_PROP_INT(UITextView ,id<UIScrollViewDelegate> ,delegate);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,directionalLockEnabled);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,bounces);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,alwaysBounceVertical);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,alwaysBounceHorizontal);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,pagingEnabled);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,scrollEnabled);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,showsHorizontalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,showsVerticalScrollIndicator);
TF_EC_CHAIN_PROP_INT(UITextView ,UIEdgeInsets,scrollIndicatorInsets);
TF_EC_CHAIN_PROP_INT(UITextView ,long long,indicatorStyle);
TF_EC_CHAIN_PROP_INT(UITextView ,double,decelerationRate);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,delaysContentTouches);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,canCancelContentTouches);
TF_EC_CHAIN_PROP_INT(UITextView ,double,minimumZoomScale);
TF_EC_CHAIN_PROP_INT(UITextView ,double,maximumZoomScale);
TF_EC_CHAIN_PROP_INT(UITextView ,double,zoomScale);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,bouncesZoom);
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,scrollsToTop);
TF_EC_CHAIN_PROP_INT(UITextView ,long long,keyboardDismissMode);
//superclass pros UIView
TF_EC_CHAIN_PROP_INT(UITextView ,UIView *,maskView)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,userInteractionEnabled)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,tag)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,semanticContentAttribute)
TF_EC_CHAIN_PROP_INT(UITextView ,CGPoint,center)
//superclass pros UIResponder
TF_EC_CHAIN_PROP_INT(UITextView ,NSUserActivity *,userActivity);
//superclass pros NSObject
TF_EC_CHAIN_PROP_INT(UITextView ,NSArray *,accessibilityElements)
TF_EC_CHAIN_PROP_INT(UITextView ,NSArray *,accessibilityCustomActions)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,isAccessibilityElement)
TF_EC_CHAIN_PROP_INT(UITextView ,NSString *,accessibilityLabel)
TF_EC_CHAIN_PROP_INT(UITextView ,NSString *,accessibilityHint)
TF_EC_CHAIN_PROP_INT(UITextView ,NSString *,accessibilityValue)
TF_EC_CHAIN_PROP_INT(UITextView ,unsigned long long,accessibilityTraits)
TF_EC_CHAIN_PROP_INT(UITextView ,UIBezierPath *,accessibilityPath)
TF_EC_CHAIN_PROP_INT(UITextView ,CGPoint,accessibilityActivationPoint)
TF_EC_CHAIN_PROP_INT(UITextView ,NSString *,accessibilityLanguage)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,accessibilityElementsHidden)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,accessibilityViewIsModal)
TF_EC_CHAIN_PROP_INT(UITextView ,BOOL,shouldGroupAccessibilityChildren)
TF_EC_CHAIN_PROP_INT(UITextView ,long long,accessibilityNavigationStyle)





@end