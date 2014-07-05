//
//  STRViewController.h
//  Star
//
//  Created by Tarun Tyagi on 04/07/14.
//  Copyright (c) 2014 Tarun Tyagi. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "RateView.h"

@interface STRViewController : UIViewController<UITableViewDataSource, UITableViewDelegate, RateViewDelegate>
{
    NSArray* titles;
    UITableView* displayTblVw;
}

@end
