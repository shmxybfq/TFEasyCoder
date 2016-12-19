//
//  UITableViewCell+TFEasyCoder.m
//  TFEasyCoder
//
//  Created by ztf on 16/10/26.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import "UITableViewCell+TFEasyCoder.h"


@implementation UITableViewCell (TFEasyCoder)





-(UITableViewCell  *(^)(UIView *  backgroundView))set_backgroundView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  backgroundView){
        weakSelf.backgroundView = backgroundView;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(UIView *  selectedBackgroundView))set_selectedBackgroundView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  selectedBackgroundView){
        weakSelf.selectedBackgroundView = selectedBackgroundView;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(UIView *  multipleSelectionBackgroundView))set_multipleSelectionBackgroundView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  multipleSelectionBackgroundView){
        weakSelf.multipleSelectionBackgroundView = multipleSelectionBackgroundView;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  selectionStyle))set_selectionStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  selectionStyle){
        weakSelf.selectionStyle = selectionStyle;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  selected))set_selected{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  selected){
        weakSelf.selected = selected;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  highlighted))set_highlighted{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  highlighted){
        weakSelf.highlighted = highlighted;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  showsReorderControl))set_showsReorderControl{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  showsReorderControl){
        weakSelf.showsReorderControl = showsReorderControl;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  shouldIndentWhileEditing))set_shouldIndentWhileEditing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldIndentWhileEditing){
        weakSelf.shouldIndentWhileEditing = shouldIndentWhileEditing;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  accessoryType))set_accessoryType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessoryType){
        weakSelf.accessoryType = accessoryType;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(UIView *  accessoryView))set_accessoryView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  accessoryView){
        weakSelf.accessoryView = accessoryView;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  editingAccessoryType))set_editingAccessoryType{
    __weak typeof(self) weakSelf = self;
    return ^(long long  editingAccessoryType){
        weakSelf.editingAccessoryType = editingAccessoryType;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(UIView *  editingAccessoryView))set_editingAccessoryView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  editingAccessoryView){
        weakSelf.editingAccessoryView = editingAccessoryView;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  indentationLevel))set_indentationLevel{
    __weak typeof(self) weakSelf = self;
    return ^(long long  indentationLevel){
        weakSelf.indentationLevel = indentationLevel;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(double  indentationWidth))set_indentationWidth{
    __weak typeof(self) weakSelf = self;
    return ^(double  indentationWidth){
        weakSelf.indentationWidth = indentationWidth;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(UIEdgeInsets  separatorInset))set_separatorInset{
    __weak typeof(self) weakSelf = self;
    return ^(UIEdgeInsets  separatorInset){
        weakSelf.separatorInset = separatorInset;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  editing))set_editing{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  editing){
        weakSelf.editing = editing;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  focusStyle))set_focusStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  focusStyle){
        weakSelf.focusStyle = focusStyle;
        return weakSelf;
    };
}





//superclass pros UIView
-(UITableViewCell  *(^)(UIView *  maskView))set_maskView{
    __weak typeof(self) weakSelf = self;
    return ^(UIView *  maskView){
        weakSelf.maskView = maskView;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  userInteractionEnabled))set_userInteractionEnabled{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  userInteractionEnabled){
        weakSelf.userInteractionEnabled = userInteractionEnabled;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  tag))set_tag{
    __weak typeof(self) weakSelf = self;
    return ^(long long  tag){
        weakSelf.tag = tag;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  semanticContentAttribute))set_semanticContentAttribute{
    __weak typeof(self) weakSelf = self;
    return ^(long long  semanticContentAttribute){
        weakSelf.semanticContentAttribute = semanticContentAttribute;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(CGPoint  center))set_center{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  center){
        weakSelf.center = center;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(CGRect  frame))set_frame{
    __weak typeof(self) weakSelf = self;
    return ^(CGRect  frame){
        weakSelf.frame = frame;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(UIColor *  backgroundColor))set_backgroundColor{
    __weak typeof(self) weakSelf = self;
    return ^(UIColor *  backgroundColor){
        weakSelf.backgroundColor = backgroundColor;
        return weakSelf;
    };
}

//superclass pros UIResponder
-(UITableViewCell  *(^)(NSUserActivity *  userActivity))set_userActivity{
    __weak typeof(self) weakSelf = self;
    return ^(NSUserActivity *  userActivity){
        weakSelf.userActivity = userActivity;
        return weakSelf;
    };
}

//superclass pros NSObject
-(UITableViewCell  *(^)(NSArray *  accessibilityElements))set_accessibilityElements{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityElements){
        weakSelf.accessibilityElements = accessibilityElements;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(NSArray *  accessibilityCustomActions))set_accessibilityCustomActions{
    __weak typeof(self) weakSelf = self;
    return ^(NSArray *  accessibilityCustomActions){
        weakSelf.accessibilityCustomActions = accessibilityCustomActions;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  isAccessibilityElement))set_isAccessibilityElement{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  isAccessibilityElement){
        weakSelf.isAccessibilityElement = isAccessibilityElement;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(NSString *  accessibilityLabel))set_accessibilityLabel{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLabel){
        weakSelf.accessibilityLabel = accessibilityLabel;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(NSString *  accessibilityHint))set_accessibilityHint{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityHint){
        weakSelf.accessibilityHint = accessibilityHint;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(NSString *  accessibilityValue))set_accessibilityValue{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityValue){
        weakSelf.accessibilityValue = accessibilityValue;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(unsigned long long  accessibilityTraits))set_accessibilityTraits{
    __weak typeof(self) weakSelf = self;
    return ^(unsigned long long  accessibilityTraits){
        weakSelf.accessibilityTraits = accessibilityTraits;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(UIBezierPath *  accessibilityPath))set_accessibilityPath{
    __weak typeof(self) weakSelf = self;
    return ^(UIBezierPath *  accessibilityPath){
        weakSelf.accessibilityPath = accessibilityPath;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(CGPoint  accessibilityActivationPoint))set_accessibilityActivationPoint{
    __weak typeof(self) weakSelf = self;
    return ^(CGPoint  accessibilityActivationPoint){
        weakSelf.accessibilityActivationPoint = accessibilityActivationPoint;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(NSString *  accessibilityLanguage))set_accessibilityLanguage{
    __weak typeof(self) weakSelf = self;
    return ^(NSString *  accessibilityLanguage){
        weakSelf.accessibilityLanguage = accessibilityLanguage;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  accessibilityElementsHidden))set_accessibilityElementsHidden{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityElementsHidden){
        weakSelf.accessibilityElementsHidden = accessibilityElementsHidden;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  accessibilityViewIsModal))set_accessibilityViewIsModal{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  accessibilityViewIsModal){
        weakSelf.accessibilityViewIsModal = accessibilityViewIsModal;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(BOOL  shouldGroupAccessibilityChildren))set_shouldGroupAccessibilityChildren{
    __weak typeof(self) weakSelf = self;
    return ^(BOOL  shouldGroupAccessibilityChildren){
        weakSelf.shouldGroupAccessibilityChildren = shouldGroupAccessibilityChildren;
        return weakSelf;
    };
}

-(UITableViewCell  *(^)(long long  accessibilityNavigationStyle))set_accessibilityNavigationStyle{
    __weak typeof(self) weakSelf = self;
    return ^(long long  accessibilityNavigationStyle){
        weakSelf.accessibilityNavigationStyle = accessibilityNavigationStyle;
        return weakSelf;
    };
}









@end
