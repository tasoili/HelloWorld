//
//  HelloWorldViewController.h
//  HelloWorld
//
//  Created by Tass Iliopoulos on 5/05/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface HelloWorldViewController : UIViewController <UITextFieldDelegate>
- (IBAction)changeGreeting:(id)sender;
@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UILabel *label;

@property (copy, nonatomic) NSString *userName;

@end
