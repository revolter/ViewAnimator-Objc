//
//  UICollectionView+Animator.h
//  Animator
//
//  Created by noah on 2019/5/17.
//  Copyright © 2019 noah. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UICollectionView (Animator)

- (NSArray<UICollectionViewCell *> *)orderedVisibleCells;

- (NSArray<UICollectionViewCell *> *)visibleCellsInSection:(NSInteger)section;
- (NSArray<UICollectionViewCell *> *)orderedVisibleCellsInSection:(NSInteger)section;
- (NSArray<UIView *> *)orderedVisibleCellsContentViewsInSection:(NSInteger)section;

@end

NS_ASSUME_NONNULL_END
