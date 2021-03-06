//
//  ListViewController.h
//  boxOfficeMatcher
//
//  Copyright (c) 2012 ARLab. All rights reserved.
//

#define yStartTable_iPhone 38
#define yStartTable_iPad 76


#import <UIKit/UIKit.h>
#import "TableViewController.h"
#import "MovieInfo.h"
@interface ListViewController : UIViewController{
    MainViewController* mainController;
    int indice;
}

@property (nonatomic, strong) IBOutlet TableViewController *mytable;

/**
 *
 *Update the movies.
 *
 */
-(IBAction)updateMovies:(id)sender;

/**
 *
 *Show information about the movie.
 *
 */
-(void)showInfo:(NSNotification*)notification;
@end
