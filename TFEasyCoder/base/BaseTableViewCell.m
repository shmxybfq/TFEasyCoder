//
//  BaseTableViewCell.m
//  HeroCoinSDK
//
//  Created by admin on 2018/5/16.
//  Copyright © 2018年 zhutaofeng. All rights reserved.
//

#import "BaseTableViewCell.h"

@implementation BaseTableViewCell

- (instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier {
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        [self initView];
    }
    return self;
}

-(void)initView{
    
    self.selectionStyle = UITableViewCellSelectionStyleNone;
    self.backgroundColor = [UIColor whiteColor];
}
-(void)setData:(id)data{
    
}
-(void)setData:(id)data indexPath:(NSIndexPath *)indexPath{
    self.indexPath = indexPath;
}
-(void)setData:(id)data indexPath:(NSIndexPath *)indexPath delegate:(id)delegate{
    self.indexPath = indexPath;
    self.delegate = delegate;
    
    if(@available(iOS 9.0, *)) {
        [self sendSubviewToBack:self.contentView];
    }
}
-(void)setData:(id)data other:(id)other indexPath:(NSIndexPath *)indexPath delegate:(id)delegate{
    self.indexPath = indexPath;
    self.delegate = delegate;
    
    if(@available(iOS 9.0, *)) {
        [self sendSubviewToBack:self.contentView];
    }
}

- (void)awakeFromNib {
    [super awakeFromNib];
    [self initView];
}

+ (CGFloat)getManualHeightWithData:(id)data{
    return 60;
}

+ (CGFloat)getManualHeightWithData:(id)data other:(id)other{
    return 60;
}
+ (CGFloat)getManualHeightWithTableView:(UITableView *)tableView cellSourceType:(CellSourceType)type{
    return 44;
}

+ (CGFloat)getAutoHeightWithTableView:(UITableView *)tableView cellSourceType:(CellSourceType)type{
    if ([UIDevice currentDevice].systemVersion.floatValue >= 8.0) {
        return UITableViewAutomaticDimension;
    }else{
        UITableViewCell *cell = [self dequeueReusableCell:tableView cellSourceType:type];
        [cell setNeedsUpdateConstraints];
        [cell updateConstraintsIfNeeded];
        [cell setNeedsLayout];
        [cell layoutIfNeeded];
        return [cell.contentView
                systemLayoutSizeFittingSize:UILayoutFittingCompressedSize].height;
    }
}

+(instancetype)dequeueReusableCell:(UITableView *)tableView cellSourceType:(CellSourceType)type{
    NSString *cellId = NSStringFromClass([self class]);
    id cell =  [tableView dequeueReusableCellWithIdentifier:cellId];
    if (cell == nil) {
        switch (type) {
            case CellSourceTypeCode:{
                cell = [[[self class] alloc]initWithStyle:UITableViewCellStyleDefault reuseIdentifier:cellId];
            }break;
            case CellSourceTypeXib:{
                cell = [self loadFromNibWithTableView:tableView nibName:NSStringFromClass([self class])];
            }break;
            default:break;
        }
    }
    return cell;
}

+(id)loadFromNibWithTableView:(UITableView *)tableView nibName:(NSString *)nibName{
    UINib *nib = [UINib nibWithNibName:nibName bundle:nil];
    [tableView registerNib:nib forCellReuseIdentifier:NSStringFromClass([self class])];
    return [tableView dequeueReusableCellWithIdentifier:NSStringFromClass([self class])];
}


- (void)setSelected:(BOOL)selected animated:(BOOL)animated {
    [super setSelected:selected animated:animated];
    
    // Configure the view for the selected state
}

@end
