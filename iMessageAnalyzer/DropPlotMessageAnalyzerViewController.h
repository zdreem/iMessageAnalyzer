//
//  DropPlotMessageAnalyzerViewController.h
//  iMessageAnalyzer
//
//  Created by Ryan D'souza on 11/25/15.
//  Copyright © 2015 Ryan D'souza. All rights reserved.
//

#import <Cocoa/Cocoa.h>

#import <CorePlot/CorePlot.h>

#import "MessageManager.h"
#import "Message.h"
#import "Person.h"
#import "Statistics.h"

@interface DropPlotMessageAnalyzerViewController : NSViewController

- (instancetype) initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil person:(Person*)person;

@end
