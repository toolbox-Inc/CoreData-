//
//  CoreVC.m
//  CoreData
//
//  Created by Ray Amour on 12/26/13.
//  Copyright (c) 2013 Ray Amour. All rights reserved.
//

#import "CoreVC.h"
#import "AppDelegate.h"

@interface CoreVC ()

@property (nonatomic, strong) NSManagedObjectContext *context;

@end

@implementation CoreVC
//
//- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
//{
//    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
//    if (self) {
//        // Custom initialization
//    }
//    return self;
//}
//
//- (void)viewDidLoad
//{
//    [super viewDidLoad];
//	// Do any additional setup after loading the view.
//}
//
//- (void)didReceiveMemoryWarning
//{
//    [super didReceiveMemoryWarning];
//    // Dispose of any resources that can be recreated.
//}

- (NSManagedObjectContext *)context
{
    return [(AppDelegate *) [[UIApplication sharedApplication]delegate]managedObjectContext];
}

- (void)cancellAndDismiss
{
    
    [self.context rollback];
    
    [self dismissViewControllerAnimated:YES completion:nil];
}

- (void)saveAndDismiss
{
    NSError *error = nil;
    
    if([self.context hasChanges]) {
        
        if(![self.context save:&error]) {
            NSLog(@"Save Failed %@", [error localizedDescription]);
        }else {
            
            NSLog(@"Save Succeded"); }
            
    }
        
    
    [self dismissViewControllerAnimated:YES completion:nil];
}

@end
