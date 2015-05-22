//
//  KLFoo.h
//  Demo Project
//
//  Created by kinglong huang on 9/7/12.
//  Copyright (c) 2012 KLStudio. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FooDelegate;
@class IDFDocument;

@interface KLFoo : NSObject {
    NSString        * _foo;
    NSString        * _bar;
}

@property (nonatomic, retain) NSString          	* foo;
@property (nonatomic, retain) NSString          	* bar;
@property (nonatomic, assign) id <FooDelegate>      delegate;

+ (id)fooWithString:(NSString *)string;

- (id)initWithString:(NSString *)string;

- (BOOL)doWorkWithString:(NSString *)blah;

@end

@protocol FooDelegate <NSObject>

- (void)iDFFooAskForReloadData:(IDFFoo *)foo;

- (void)iDFFoo:(IDFFoo *)foo
        requestDidFinishedWithData:(NSData *)data
         error:(NSError *)error;

@end