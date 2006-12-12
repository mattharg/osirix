//
//  OSIWindowController.h
//  OsiriX
//
//  Created by Lance Pysher on 12/11/06.
/*=========================================================================
  Program:   OsiriX

  Copyright (c) OsiriX Team
  All rights reserved.
  Distributed under GNU - GPL
  
  See http://homepage.mac.com/rossetantoine/osirix/copyright.html for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.
=========================================================================*/

/*
Root class for the Viewer Window Controllers such as ViewerController
and Window3DController
*/

#import <Cocoa/Cocoa.h>


@interface OSIWindowController : NSWindowController {

}

- (NSMutableArray*) pixList;
- (void)windowWillClose:(NSNotification *)notification;

@end
