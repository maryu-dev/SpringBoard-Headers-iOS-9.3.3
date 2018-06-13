
#import "NSObject.h"

@class NSIndexPath, NSString, UICollectionReusableView, UICollectionView, UICollectionViewCell;

@protocol UICollectionViewDataSource <NSObject>
- (UICollectionViewCell *)collectionView:(UICollectionView *)arg1 cellForItemAtIndexPath:(NSIndexPath *)arg2;
- (long long)collectionView:(UICollectionView *)arg1 numberOfItemsInSection:(long long)arg2;

@optional
- (void)collectionView:(UICollectionView *)arg1 moveItemAtIndexPath:(NSIndexPath *)arg2 toIndexPath:(NSIndexPath *)arg3;
- (_Bool)collectionView:(UICollectionView *)arg1 canMoveItemAtIndexPath:(NSIndexPath *)arg2;
- (UICollectionReusableView *)collectionView:(UICollectionView *)arg1 viewForSupplementaryElementOfKind:(NSString *)arg2 atIndexPath:(NSIndexPath *)arg3;
- (long long)numberOfSectionsInCollectionView:(UICollectionView *)arg1;
@end

