//
//  thatsAlarmingFirstViewController.m
//  thatsAlarming
//
//  Created by Derrick Cheng on 4/5/14.
//  Copyright (c) 2014 Derrick Cheng. All rights reserved.
//

#import "thatsAlarmingAlarmsController.h"

@interface thatsAlarmingAlarmsController ()
@end

@implementation thatsAlarmingAlarmsController

@synthesize myTableView;

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void) viewDidAppear:(BOOL)animated
{
    // Check if alarm is active
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

/***
 * Decision for showing active alarm
 ***/
- (BOOL) isAlarmActive
{
    return YES;
}

/****
 * TableView Stuff
 ****/

- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
    NSString *cellIdentifier = @"alarm";
    AlarmCell *cell = [tableView dequeueReusableCellWithIdentifier:cellIdentifier forIndexPath:indexPath];
    return cell;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
    return [self.alarms count];
}

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{
    return 1;
}

/**************
 * Segue Stuff
 **************/

- (IBAction)cancel:(UIStoryboardSegue *)segue
{
}

- (IBAction)done:(UIStoryboardSegue *)segue
{
    //    + (EKEvent *)eventWithEventStore:(EKEventStore *)eventStore
    [self.myTableView reloadData];
}

- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender
{
    if ([[segue identifier] isEqualToString:@"ShowDetails"]) {
//        MyDetailViewController *detailViewController = [segue destinationViewController];
//        NSIndexPath *indexPath = [self.tableView indexPathForSelectedRow];
//        detailViewController.data = [self.dataController objectInListAtIndex:indexPath.row];
    }
}

@end
