//
//  PhotoexViewController.h
//  GPUFilterCameraSample
//
//  Created by 龍野翔 on 2014/04/11.
//  Copyright (c) 2014年 龍野翔. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PhotoexViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource>
{
    
}

@property (retain, nonatomic) UICollectionViewFlowLayout *flowLayout;
@property (retain, nonatomic) UICollectionView *collectionView;

@property (weak, nonatomic) NSArray *array;

@end