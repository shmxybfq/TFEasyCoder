//
//  UITableViewCell+TFEasyCoder.h
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>




@interface UITableViewCell (TFEasyCoder)





-(UITableViewCell  *(^)(UIView *  backgroundView))set_backgroundView;
-(UITableViewCell  *(^)(UIView *  selectedBackgroundView))set_selectedBackgroundView;
-(UITableViewCell  *(^)(UIView *  multipleSelectionBackgroundView))set_multipleSelectionBackgroundView;
-(UITableViewCell  *(^)(long long  selectionStyle))set_selectionStyle;
-(UITableViewCell  *(^)(BOOL  selected))set_selected;
-(UITableViewCell  *(^)(BOOL  highlighted))set_highlighted;
-(UITableViewCell  *(^)(BOOL  showsReorderControl))set_showsReorderControl;
-(UITableViewCell  *(^)(BOOL  shouldIndentWhileEditing))set_shouldIndentWhileEditing;
-(UITableViewCell  *(^)(long long  accessoryType))set_accessoryType;
-(UITableViewCell  *(^)(UIView *  accessoryView))set_accessoryView;
-(UITableViewCell  *(^)(long long  editingAccessoryType))set_editingAccessoryType;
-(UITableViewCell  *(^)(UIView *  editingAccessoryView))set_editingAccessoryView;
-(UITableViewCell  *(^)(long long  indentationLevel))set_indentationLevel;
-(UITableViewCell  *(^)(double  indentationWidth))set_indentationWidth;
-(UITableViewCell  *(^)(UIEdgeInsets  separatorInset))set_separatorInset;
-(UITableViewCell  *(^)(BOOL  editing))set_editing;
-(UITableViewCell  *(^)(long long  focusStyle))set_focusStyle;




//superclass pros UIView
-(UITableViewCell  *(^)(UIView *  maskView))set_maskView;
-(UITableViewCell  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled;
-(UITableViewCell  *(^)(long long  tag))set_tag;
-(UITableViewCell  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute;
-(UITableViewCell  *(^)(CGPoint  center))set_center;
-(UITableViewCell  *(^)(CGRect  frame))set_frame;
-(UITableViewCell  *(^)(UIColor *  backgroundColor))set_backgroundColor;
//superclass pros UIResponder
-(UITableViewCell  *(^)(NSUserActivity *  userActivity))set_userActivity;
//superclass pros NSObject
-(UITableViewCell  *(^)(NSArray *  accessibilityElements))set_accessibilityElements;
-(UITableViewCell  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions;
-(UITableViewCell  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement;
-(UITableViewCell  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel;
-(UITableViewCell  *(^)(NSString *  accessibilityHint))set_accessibilityHint;
-(UITableViewCell  *(^)(NSString *  accessibilityValue))set_accessibilityValue;
-(UITableViewCell  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits;
-(UITableViewCell  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath;
-(UITableViewCell  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint;
-(UITableViewCell  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage;
-(UITableViewCell  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden;
-(UITableViewCell  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal;
-(UITableViewCell  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren;
-(UITableViewCell  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle;








@end
