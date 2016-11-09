//
//  TableviewCell.h
//  TFEasyCoderDemo
//
//  Created by ztf on 16/11/8.
//  Copyright © 2016年 ztf. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TableviewCell : UITableViewCell

+(instancetype)dequeueReusableCellWithUITableView:(UITableView *)tableView indexPath:(NSIndexPath *)indexPath;
-(void)setViewData:(id)data;

@end
