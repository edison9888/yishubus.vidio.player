//
//  CatelogViewCell.h
//  VidioPlayer
//
//  Created by shi feng on 13-4-10.
//  Copyright (c) 2013年 com.yishubus.vidioplayer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CatelogViewCell : UITableViewCell

@property (strong, nonatomic) IBOutlet UILabel *introduce;
@property (copy, nonatomic) NSString *introduceString;
@property (copy, nonatomic) NSString *imageUrl;

@end
