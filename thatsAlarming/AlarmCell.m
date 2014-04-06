//
//  alarmCell.m
//  thatsAlarming
//
//  Created by Derrick Cheng on 4/5/14.
//  Copyright (c) 2014 Derrick Cheng. All rights reserved.
//

#import "AlarmCell.h"

@implementation AlarmCell

- (void)setWithAlarm:(UILocalNotification *) notification
{
    NSDateFormatter *dateFormat = [[NSDateFormatter alloc] init];
    [dateFormat setDateFormat:@"yyyy-MM-dd"];
        
    NSDateFormatter *timeFormat = [[NSDateFormatter alloc] init];
        [timeFormat setDateFormat:@"HH:mm:ss"];
        
//        NSString *theDate = [dateFormat stringFromDate:notification.fireDate
//];
    NSString *theTime = [timeFormat stringFromDate:notification.fireDate
];
    [self.time setText: theTime];
}
- (id)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString *)reuseIdentifier
{
    self = [super initWithStyle:style reuseIdentifier:reuseIdentifier];
    if (self) {
        // Initialization code
        self.time =  [[UILabel alloc] init];
    }
    return self;
}

- (void)setSelected:(BOOL)selected animated:(BOOL)animated
{
    [super setSelected:selected animated:animated];

    // Configure the view for the selected state
}

- (void)dealloc {
    [_time release];
    [super dealloc];
}
@end
