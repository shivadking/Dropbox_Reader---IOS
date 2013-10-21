//
//  DBBViewController.h
//  DropboxBrowser
//
//  Created by iRare Media on 12/26/12.
//  Copyright (c) 2013 iRare Media. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "DropboxBrowserViewController.h"

@interface DBBViewController : UIViewController <DropboxBrowserDelegate, UINavigationControllerDelegate>

- (IBAction)browseDropbox:(id)sender;
- (IBAction)clearDocs:(id)sender;
@property (weak, nonatomic) IBOutlet UIButton *clearDocsBtn;
@property (weak, nonatomic) IBOutlet UINavigationBar *navBar;
@property (weak, nonatomic) IBOutlet UIImageView *imgView;

@end
