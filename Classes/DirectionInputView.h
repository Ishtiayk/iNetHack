//
//  DirectionInputView.h
//  iNetHack
//
//  Created by dirk on 7/4/09.
//  Copyright 2009 Dirk Zimmermann. All rights reserved.
//

//  This file is part of iNetHack.
//
//  iNetHack is free software: you can redistribute it and/or modify
//  it under the terms of the GNU General Public License as published by
//  the Free Software Foundation, either version 3 of the License, or
//  (at your option) any later version.
//
//  iNetHack is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//  GNU General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with iNetHack.  If not, see <http://www.gnu.org/licenses/>.

#import <UIKit/UIKit.h>

#define kNumRows (4)
#define kNumCols (3)
#define kNumRects (kNumRows*kNumCols)

@class Shortcut;

@interface DirectionInputView : UIView {
	
	CGSize tileSize;
	CGRect rects[kNumRects];
	Shortcut *shortcuts[kNumRects];
	BOOL rectsCreated;
	
}

@property (nonatomic, readonly) CGRect *rects;
@property (nonatomic, readonly) Shortcut **shortcuts;

@end
