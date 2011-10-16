//
//  MDSpreadViewCellBackground.h
//  MDSectionedTableViewDemo
//
//  Created by Dimitri Bouniol on 10/15/11.
//  Copyright (c) 2011 Mochi Development, Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MDSpreadViewCellBackground : UIView {
	BOOL highlighted;
}

@property (nonatomic, getter=isHighlighted) BOOL highlighted;

- (void)prepareBackground;
- (void)layoutBackground;

@end
