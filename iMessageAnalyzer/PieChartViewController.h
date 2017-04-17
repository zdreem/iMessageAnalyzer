//
//  PieChartViewController.h
//  iMessageAnalyzer
//
//  Created by Ryan D'souza on 1/8/16.
//  Copyright © 2016 Ryan D'souza. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import <CorePlot/CorePlot.h>

#import "Constants.h"
#import "TemporaryDatabaseManager.h"
#import "Message.h"
#import "Person.h"
#import "Statistics.h"


/** Controls and shows the pie chart for data analysis */

@interface PieChartViewController : NSViewController <CPTPieChartDataSource, CPTPieChartDelegate>

# pragma mark - Constructor

- (instancetype) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil person:(Person *)person temporaryDatabase:(TemporaryDatabaseManager *)temporaryDatabase;


# pragma mark - Modifying data shown

- (void) showSentAndReceivedMessages;
- (void) showSentAndReceivedWords;
- (void) showTotalMessages;

@end
