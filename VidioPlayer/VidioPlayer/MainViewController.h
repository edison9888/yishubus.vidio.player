//
//  MainViewController.h
//  VidioPlayer
//
//  Created by shi feng on 13-3-18.
//  Copyright (c) 2013年 com.yishubus.vidioplayer. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MainTitleCell.h"

@interface MainViewController : UITableViewController <MainTitleDelegate>

@property (strong, nonatomic) NSArray *array;
@end
