//
//  VideoSetController.h
//  VidioPlayer
//
//  Created by shi feng on 13-4-3.
//  Copyright (c) 2013年 com.yishubus.vidioplayer. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface VideoSetController : UIViewController <UITableViewDataSource,UITableViewDelegate>

- (void) initDraw: (int) mid;

@end