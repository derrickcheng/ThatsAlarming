//
//  thatsAlarmingFirstViewController.h
//  thatsAlarming
//
//  Created by Derrick Cheng on 4/5/14.
//  Copyright (c) 2014 Derrick Cheng. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <EventKit/EventKit.h>
#import "AlarmCell.h"

@interface thatsAlarmingAlarmsController : UIViewController<UITableViewDataSource, UITableViewDelegate>

@property (strong, nonatomic) IBOutlet UITableView *myTableView;
@property (strong, nonatomic) NSMutableArray* alarms;
@property (strong, nonatomic) EKEventStore* eventStore;

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath;

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section;

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView;


@end
